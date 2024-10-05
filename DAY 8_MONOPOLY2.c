#include <stdio.h>

int main()
{
   int t,a,b,c,d;
printf("enter the value of t");
scanf("%d",&t);
for(int i=1;i<=t;i=i+1){
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b&&a>c&&a>d){
        if(a>b+c+d)
        printf("yes");
        else
        printf("no");
    }
    else if(b>a&&b>c&&b>d){
        if(b>a+c+d)
        printf("yes");
        else
        printf("no");
    }
    else if(c>b&&c>a&&c>d){
        if(c>b+a+d)
        printf("yes");
        else
        printf("no");
    }
    else if(d>b&&d>c&&a<d){
        if(d>b+c+a)
        printf("yes");
        else
        printf("no");
    }
   
}
    return 0;
}



