#include <stdio.h>

int main()
{
   int x,y;
   for(int t=1; t<=1000;t=t+1){
       scanf("%d",&x);
       scanf("%d",&y);
       int s1=2;int s2 =1;
       int rs=s1-s2;
       int mintime =y-x/rs;
     if(mintime<0)
       mintime=-mintime ;
       printf("minimum time taken by the police to catch the thief is =%d second",mintime);
       
   }


    return 0;
}

