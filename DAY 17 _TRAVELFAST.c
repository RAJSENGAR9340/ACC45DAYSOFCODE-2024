#include <stdio.h>

int main()
{
    int x,y;
    for(int t=1;t<=100; t=t+1){
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x>y)
	    printf(" car " );
	    else if (y>x)
	    printf("bike ");
	    else if(x==y)
	    printf("same ");
	    
	    
	    
	}

    return 0;
}

