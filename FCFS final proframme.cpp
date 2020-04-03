#include<stdio.h>
#include<conio.h>
#define m 70
 int main() 
{
	int i,j,n=10,bt[m],at[m],wt[m],tat[m],temp[m];
	float awt=0,atat=0;
	printf("Please Enter The Arrival Time(start from 0)");
	for (i=0;i<n;i++)
	{
	scanf("\n%d",&at[i]);
}
	printf(" Please Enter The Burst Time");
	for(i=0;i<n;i++)
	{
	scanf("%d",&bt[i]);
}
	
	 temp[0]=0;
	 printf("Proess No\t Arrival Time\t Burst Time\t Waiting Time\t Turn Around Time");
	 for(i=0;i<n;i++)
	 {
	 
	 wt[i]=0;
	 tat[i]=0;
	 temp[i+1]=temp[i]+bt[i];
	 wt[i]=temp[i]-at[i]; 
	 tat[i]=wt[i]+bt[i];
	 awt= awt+wt[i];
	 atat=atat+tat[i];
	 printf("\n%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t",i+1,at[i],bt[i],wt[i],tat[i]);
}
awt=awt/n;
atat=atat/n;
printf("\n average waiting time= %f\n",awt);
printf("\naverage turnaround time %f\n",atat);
return 0;
}
