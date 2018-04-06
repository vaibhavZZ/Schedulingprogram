#include<stdio.h>
struct process
{
int process_id;
int arrival_time;
int burst_time;
int priority;
};
void main()
{
int i,q,n;
printf("Enter total number of process");
scanf("%d",&n);
struct process p[n];
for(i=0;i<n;i++)
{
printf("PROCESS ID\n");
scanf("%d",&p[i].process_id);
printf("ARRIVAL TIME\n");
scanf("%d",&p[i].arrival_time);
printf("BURST TIME\n");
scanf("%d",&p[i].burst_time);
printf("PRIORITY\n");
scanf("%d",&p[i].priority);
}
printf("*****PROCESS CHART*****\n");
printf("PROCESS ID\t");
printf("ARRIVAL TIME\t");
printf("BURST TIME\t");
printf("PRIORITY\t\n");
for(i=0;i<n;i++)
{
printf("%d\t\t",p[i].process_id);
printf("%d\t\t",p[i].arrival_time);
printf("%d\t\t",p[i].burst_time);
printf("%d\t\t\n",p[i].priority);
}

}
