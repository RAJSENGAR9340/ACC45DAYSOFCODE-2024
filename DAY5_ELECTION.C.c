#include <stdio.h>

int main()
{
    int t,Xa,Xb,Xc;
printf("enter the value of t");
scanf("%d",&t);
for(int i=1;i<=t;i=i+1){
    printf("\nenter the votes of xa ");
    scanf("%d",&Xa);
    printf("enter the votes of xb ");
    scanf("%d",&Xb);
    printf("enter the votes of xc");
    scanf("%d",&Xc);
    if(Xa+Xb+Xc==101){
    if(Xa>50||Xb>50||Xc>50){
        
        if(Xa>Xb&&Xa>Xc)
        printf("A");
        else if(Xb>Xc&&Xb>Xa)
        printf("B");
        else if(Xc>Xb&&Xc>Xa)
        printf("c");
        
        
    
    else if(Xa<50&&Xb<50&&Xc<50) 
         printf("nota");
        }
    }
    else
    printf("the total votes equal to 101");
    
}


    return 0;
}