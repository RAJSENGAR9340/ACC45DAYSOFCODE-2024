#include <stdio.h>

int main()
{
   int n,x,t;

	for(int t=1;t<=5000;t=t+1){
	    scanf("%d",&n);
	    scanf("%d",&x);
	    int minflip=n-x;
	    if (x==0)
	    printf("all cards are facing same ");
	   else if(n==x)
	     printf("all cards are facing same ");
	     
	   else  if(minflip<=x)
	    printf("flip the %d card which are intially facing down ",minflip);
	   else  if(minflip>x)
	     printf("flip the %d card which are intially facing up ",x);
	     
	    

}



    return 0;
}