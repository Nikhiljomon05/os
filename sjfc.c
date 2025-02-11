#include<stdio.h>
void main()
{
int n,i,j,temp,time=0;
double avg_tat=0,avg_wait=0;
printf("enter the no of process");
scanf("%d",&n);
int bt[n],wt[n],tt[n],p[n];
for(i=0;i<n;i++)
{
p[i]=i+1;
printf("enter the burst time for p%d",p[i]);
scanf("%d",&bt[i]);
}
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(bt[i]>bt[j])
  {
   temp=bt[i];
   bt[i]=bt[j];
   bt[j]=temp;
   temp=p[i];
   p[i]=p[j];
   p[j]=temp;
   }
   if(bt[i]>bt[j])
  {
   temp=p[i];
   p[i]=p[j];
   p[j]=temp;
   }
   }
   }
   wt[0]=0;
   for(i=1;i<n;i++)
   {
   wt[i]=wt[i-1]+bt[i-1];
   avg_wait=avg_wait+wt[i];
   }
   avg_wait=avg_wait/n;
   for(i=0;i<n;i++)
   {
    tt[i]=wt[i]+bt[i];
    avg_tat=avg_tat+tt[i];
    }
     avg_tat=avg_tat/n;
    printf("\npid\tbt\twt\ttt");
    for(i=0;i<n;i++)
    {
    printf("\n%d\t%d\t%d\t%d",p[i],bt[i],wt[i],tt[i]);
    }
   printf("\n\ngannt chart\n");
   for(i=0;i<n;i++)
   {
    printf(" ----------------------------");
    }
    printf("\n");
    printf("Process\tBurst time\tWait time\tTurn around time\n");
     for(i=0;i<n;i++)
     {
          printf("P%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tt[i]);
     }
     printf("\n");
     printf("Average waiting time: %.2f\nAverage turn around time: %.2f\n",avg_wait,avg_tat);
     printf("\n");
     printf(" ");
     for(i=0;i<n;i++)
     {
          printf("-----------------");
     }
     printf("\n|");
     for(i=0;i<n;i++)
     {
          printf("P%d |",i+1);
     }
     printf("\n|");
     for(i=0;i<n;i++)
     {
          printf("-----------------");
     }
     printf("\n0\t");
     int current_time=0;
     for(i=0;i<n;i++)
     {
          current_time=current_time+bt[i];
          printf("%d\t",current_time);
     }
     printf("\n");
     }
