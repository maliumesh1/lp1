#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
   int  bt[10];
   int at[10];
   int tt[10],wt[10];
   int i,n;
   cout<<"\n Enter no.of Process";
   cin>>n;
   for(i=0;i<n;i++)
    {
       cout<<"\n Enter Burst Time for Process P"<<i+1<<"\t";
       cin>>bt[i];
       cout<<"\n Enter Arrival Time for Process P"<<i+1<<"\t";
       cin>>at[i];  
    }


   tt[0]=bt[0];
   for(i=1;i<n;i++)
     tt[i]=tt[i-1]+bt[i];
   wt[0]=0;
   for(i=1;i<n;i++)
     wt[i]=tt[i-1];
   
	float sum=0,sumwt=0;
	float avg=0.0f,wavg=0.0f;
   cout<<"\n---------------------------------------";
   cout<<"\nPid \t Turnaround Time \t Waiting Time\n "; 
   for(i=0;i<n;i++)
     {
          sum=sum+(tt[i]-at[i]);
          sumwt=sumwt+(wt[i]-at[i]);
          cout <<i<<"\t"<<tt[i]-at[i]<<"\t"<<wt[i]-at[i]<<endl;
     }
   avg=(float)sum/n;
   wavg=(float)sumwt/n;
   cout<<"\n Avg Turn Around Time ="<<avg;
   cout<<"\n Avg Waiting Around Time ="<<wavg;
    return 0;
    
}
