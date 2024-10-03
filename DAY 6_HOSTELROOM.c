#include <stdio.h>
#include<stdio.h>
int main()
{
    int x,n,t;
	x=0;
	printf("enter the length of array");
	scanf("%d",&n);
	printf("enter the value  of t");
	scanf("%d",&t);
	int A[n];
	for(int i=0;i<t;i=i+1){
	    scanf("%d",&A[i]);
	    x=x+A[i];
	    if(x<A[i]){
	    x=A[i];
	    }
	   
	}
	printf(" maximum number of people at %dminute =%d ",t,x);
	

    return 0;
}

