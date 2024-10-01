#include <stdio.h>

int main()
{
    int n;int t=0;
   printf("enter the value of n");
    scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i=i+1)
	   scanf("%d",&arr[i]);
	   for(int i=0;i<=0;i=i+1){
	       for(int j=0;j<n;j=j+1){
	       if(arr[i]!=arr[j]){
	       arr[i]=arr[j];
	       t =t+1;
	       }
	       }
	   }
	   printf(" number of minimum operation will be=%d",t);
    return 0;
}