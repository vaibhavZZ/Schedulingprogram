#include<stdio.h>
void pree_priority_schd(int);
void round_robin_schdl();
int rear=-1,rear1=-1;
int front=-1,front1=-1;
struct process
{
int process_id;
int arrival_time;
int burst_time;
int priority;
int waiting_time;
int completion_time;
int turn_around_time;
}process;
process p[n],q1[n],q2[n],temp;
void main()
{
int i,n,x,y,j,k,temp1;
printf("Enter total number of procescs");
scanf("%d",&n);
int prior[n];
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
temp=p[i];
p[i].=p[i+1];
p[i+1]=temp;
}
}
}
for(k=0;k<n;k++)
{
if(p[k].arrival_time==p[k].arrival_time && p[k].priority<p[k+1].priority)
{
temp=p[k+1];
p[k+1]=p[k];
p[k]=temp;
}
}
for(i=0;i<n;i++)
{
q2[i]=p[i];
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
pree_priority_schd(n);
}
void pree_priority_schd(int q)
{
int x=n;
int time=0;
int l=0;
while(time>=0&&x!=0)
{
if(p[l].arrival_time<p[l+1].arrival_time && p[l].burst_time>0)
{
printf("Process := %d running at time := %d",p[l].process_id,time);
p[l].burst_time=p[l].burst_time-1;
}
else if(p[l].arrival_time==p[l+1].arrival_time && p[l].burst_time>0)
{
if(p[l].priority>p[l+1].priority)
{
printf("Process := %d running at time := %d ",p[l].process_id,time);
p[l].burst_time=p[l].burst_time-1;
}
}
else if(l==x-1&&p[l].burst_time>0)
{
printf("Process := %d running at time := %d ",p[l].process_id,time);
p[l].burst_time=p[l].burst_time-1;
if(p[l].bursu_time==0)
x--;
if(x!=n-1)
{
  for(int i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
     {
     for(i=0;i< n-j-1;i++)
      { 
          if(p[i].priority<p[i+1].priority)
        { 
           temp1=p[i]; 
             p[i]=p[i+1];
            p[i+1]=temp1;
         }
       }
      }

if(p[i].burst_time==q2[i].burst_time)
for(int b=0;b<n&&p[i].burst_time>0;b++)
{
time=time+1;
printf("Process := %d running at time := %d ",p[l].process_id,time);
p[l].burst_time=p[l].burst_time-1;
}
}
}
}
}
void round_robin_schdl()
{
}









}
