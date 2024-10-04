#include <stdio.h>

int main()
{
    int x,t;
printf("enter the value of t");
scanf("%d",&t);
if(t<=10){
for(int i=1;i<=t;i=i+1){
    scanf("%d",&x);
    x=x+3;
    if(x<=10)
    printf("yes");
    else
    printf("no");
}
}
else
printf("value of t must be less than 10");
    return 0;
}