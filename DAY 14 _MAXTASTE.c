#include <stdio.h>

int main()
{
    int a,b,c,d;
    for(int t=1;t<=100;t=t+1){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        if(a>b&&a>c&&a>d){
            if(b>c&&b>d)
                printf("%d",a+b);
                else if (b<c&&c>d)
                printf("%d",c+a);
                else if (d>c&&b<d)
                printf("%d",a+d);
            }
            
            if(a<b&&b>c&&b>d){
            if(a>c&&a>d)
                printf("%d",a+b);
                else if (a<c&&c>d)
                printf("%d",c+b);
                else if (d>c&&a<d)
                printf("%d",b+d);
            }
            if(c>b&&a<c&&c>d){
            if(b>a&&b>d)
                printf("%d",c+b);
                else if (b<a&&a>d)
                printf("%d",c+a);
                else if (d>a&&b<d)
                printf("%d",c+d);
            }
            if(d>b&&d>c&&a<d){
            if(b>c&&b>a)
                printf("%d",d+b);
                else if (b<a&&a>c)
                printf("%d",d+a);
                else if (b<c&&a<c)
                printf("%d",a+c);
            }
            
            
        }
        return 0;
    
}
    
    


   
