#include<stdio.h>
struct process
{
int process_id;
int arrival_time;
int burst_time;
int priority;
int waiting_time;
int completion_time;
int turn_around_time;
};
void main()
{
int i,n,x,y,temp,j,temp1,temp2,temp3;
printf("Enter total number of procescs");
scanf("%d",&n);
struct process p[n];
for(i=0;i<n;i++)
{
printf("PROCESS ID := ");
scanf("%d",&p[i].process_id);
printf("ARRIVAL TIME := ");
scanf("%d",&p[i].arrival_time);
printf("BURST TIME := ");
scanf("%d",&p[i].burst_time);
printf("PRIORITY := ");
scanf("%d",&p[i].priority);
}

for(j=0;j<n-1;j++)
{
for(i=0;i< n-j-1;i++)
{
if(p[i].arrival_time>p[i+1].arrival_time)
{
temp=p[i].arrival_time;
p[i].arrival_time=p[i+1].arrival_time;
p[i+1].arrival_time=temp;
temp1=p[i].burst_time;
p[i].burst_time=p[i+1].burst_time;
p[i+1].burst_time=temp1;
temp2=p[i].priority;
p[i].priority=p[i+1].priority;
p[i+1].priority=temp2;
temp3=p[i].process_id;
p[i].process_id=p[i+1].process_id;
p[i+1].process_id=temp3;
}
}
}
for(i=0;i<n;i++)
{
if(i==0)
{
p[i].completion_time=p[i].burst_time+p[i].arrival_time;
p[i].turn_around_time=p[i].completion_time-p[i].arrival_time;
p[i].waiting_time=p[i].turn_around_time-p[i].burst_time;
}
else if(p[i].arrival_time>p[i-1].completion_time)
{
y=p[i].burst_time;
p[i].completion_time=p[i].arrival_time+y;
p[i].turn_around_time=p[i].completion_time-p[i].arrival_time;
p[i].waiting_time=p[i].turn_around_time-p[i].burst_time;
}
else
{
x=p[i].burst_time;
p[i].completion_time=p[i-1].completion_time+x;
p[i].turn_around_time=p[i].completion_time-p[i].arrival_time;
p[i].waiting_time=p[i].turn_around_time-p[i].burst_time;
}
}
printf("*****PROCESS CHART*****\n\n");
printf("PROCESS ID\t");
printf("ARRIVAL TIME\t");
printf("BURST TIME\t");
printf("PRIORITY\t");
printf("COMPLETION TIME\t");
printf(" TURN AROUND TIME\t");
printf("WAITING TIME\t\n");
for(i=0;i<n;i++)
{
printf("%d\t\t",p[i].process_id);
printf("%d\t\t",p[i].arrival_time);
printf("%d\t\t",p[i].burst_time);
printf("%d\t\t",p[i].priority);
printf("%d\t\t\t",p[i].completion_time);
printf("%d\t\t\t",p[i].turn_around_time);
printf("%d\t\t\t\n",p[i].waiting_time);
}
}
