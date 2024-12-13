#include<stdio.h>
void main(){
    int bt[20],wt[20],tat[20],i,n;
    float wtavg,tatavg;
    printf("\n Enter the number of processes \n");
    scanf("%d \n",&n);
    for(i=0;i<n;i++){
        printf("Enter the burst time of processe \n");
        scanf("%d",&bt[i]);
    }
    wt[0]=wtavg=0;
    tat[0]=tatavg=bt[0];
    for(i=0;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i]+bt[i];
        wtavg=wtavg+bt[i];
        tatavg=tatavg+bt[i];

    }
    printf("\n \tPROCESS\tBURST TIME \t WAITING TIME \n TURN AROUND TIME");
    for(i=0;i<n;i++){
        printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
        
        printf("\n Average wait time is %f\n",wtavg/n);
        printf("\n Average turn around time is %f",tatavg/n);
        getchar();
    }
}