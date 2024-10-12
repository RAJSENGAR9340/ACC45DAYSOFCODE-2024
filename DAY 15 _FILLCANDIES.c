#include <stdio.h>

int main()
{
 int n,k,m;
 for(int t=1;t<=1000;t++){
    int  bag =0;
     scanf("%d",&n);
     scanf("%d",&k);
     scanf("%d",&m);
     int r=k*m;
     int w=n/r;
     bag =w;
     n=n%r;
     while(n>0){
     if(n<=r)
     n=n-r;
     bag++;
     
 }

  printf("%d",bag);  
    
    
}



    return 0;
}