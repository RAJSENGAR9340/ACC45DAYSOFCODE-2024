#include <stdio.h>

int main()
{
   int x,y;
    int maxmonth=0;
     
    for(int t=1;t<=1000;t=t+1){
        scanf("%d",&x);
        int u=x;
        scanf("%d",&y);
       while(x<y){
           maxmonth=maxmonth+1;
           x=x+u;
           
       }
       printf(" maximum number of months for which he can rent the cooler=%d and  strictly less than %d coins",maxmonth,x);

 
}

    return 0;
}
