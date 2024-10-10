#include <stdio.h>

int main()
{
   float x,y;
   for(int t=1;t<=1000;t=t+1){
       scanf("%f",&x);
       scanf("%f",&y);
       float percentage =(y/x)*100;
       if(percentage>=50)
       printf("yes ");
       else
        printf("no");
       
   }

    return 0;
}