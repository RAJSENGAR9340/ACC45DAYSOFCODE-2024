#include <stdio.h>

int main()
{
   int n,a,b;
	for(int t=1;t<=100000;t=t+1){
	    int total =0;
	    scanf("%d",&n);
	    scanf("%d",&a);
	    scanf("%d",&b);
	    while(n!=1){
	    n=n/2;
	    total=total+a;
	    if(n!=1)
	    total=total+b;
	    }
	    printf("%d",total);
	
	}

    return 0;
}