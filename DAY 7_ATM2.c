#include <stdio.h>

int main()
{
   	int k,n,t;
	printf("enter the value of k");
	scanf("%d",&k);
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the value of t");
	scanf("%d",&t);
	int A[n];
	for(int i=0;i<t;i=i+1){
	scanf("%d",&A[i]);
	if(k>=A[i]){
	printf("1\n");
	k=k-A[i];
	}
	else
	printf("0");
	
	}
    return 0;
}

