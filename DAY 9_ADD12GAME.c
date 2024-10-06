#include <stdio.h>

int main()
{
    
    int n,x;
    
for(int t=1;t<=10;t=t+1){
    x=0;
    
    scanf("%d",&n);
     int j=1;
    while(j<=10){
    int a,b;
    
    scanf("%d",&a);
    
    x=x+a;
    if(x>=n){
    printf("alice");\
    x=0;
    break;
    }
    
    scanf("%d",&b);
    x=x+b;
    
    
    if(x==n){
    printf("bob");
    x=0;
    break ;
    }
    j=j+1;
}
}


    return 0;
}

