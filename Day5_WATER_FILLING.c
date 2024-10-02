#include <stdio.h>

int main()
{
    int t;
    printf("enter the value of t");
    scanf("%d",&t);
    int b1,b2,b3;
for(int i=0;i<=t;i=i+1){
    printf("\nenter the value of b1");
    scanf("%d",&b1);
    printf("enter the value of b2");
    scanf("%d",&b2);
    printf("enter the value of b3");
    scanf("%d",&b3);
   if(b1==1&&b2==1&&b3==0)
   printf("not now");
   else if (b1 ==0&&b2==1&&b3==0)
   printf("water filling time");
  else if(b1==0&&b2==0&&b3==1)
   printf("water filling time");
   else if(b1==1&&b2==0&&b3==0)
   printf("water filling time");
   else if(b1==0&&b2==1&&b3==1)
   printf("not now");
   else if(b1==0&&b2==0&&b3==0)
   printf("water filling time");
   else if(b1==1&&b2==1&&b3==1)
   printf("not now");
}
    return 0;
}