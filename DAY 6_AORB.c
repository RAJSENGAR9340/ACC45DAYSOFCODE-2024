#include <stdio.h>

int main()
{
    int t,A,B;// t =test case 
	printf("enter the value of t ");
	scanf("%d",&t);
	for(int i=1;i<=t;i=i+1){
	    printf("\nenter the time taken by chef to solve problem A");
	    scanf("%d",&A);
	    printf("enter the time taken by chef to solve problem B");
	    scanf("%d",&B);
	    // a->b;
	    int pointA=500-(2*A);
	    int pointB=1000-(4*B);
	    int total=pointA+pointB;
	    //b-> A
	    int pointsB=1000-(4*B);
	    int pointsA=500-(2*A);
	    int totals=pointsA+pointsB;
	    if(total>totals)
	    printf("solve problem from A->B and points =%d",total);
	    else if (total<totals)
	     printf("solve problem from B->A and points =%d",totals);
	      else if (total==totals)
	     printf("in both case points are same= %d",totals);
	     
	    
	}

    return 0;
}