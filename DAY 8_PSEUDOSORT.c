#include <stdio.h>

int main()
{
    int n,i;
	 
	 for(int t=1;t<=4; t=t+1){
	     printf("enter the value of n");
	 scanf("%d",&n);
	  int a[n];
	    printf("\nenter the value of i");
	    scanf("%d",&i);
	    for(int j=0;j<n;j=j+1)
	     scanf("%d",&a[j]);
	    int swap=a[i];
	    a[i]=a[i+1];
	    a[i+1]=swap;
	for(int k=0;k<n;k=k+1)
	     printf("%d",a[k]);
	     printf("\n");
	     int h=0;
	     for(int r=0;r<n;r=r+1){
	     if(a[r]>a[r+1])
	     h=1; 
	     else {
	     h=0;
	     break ;
	     }
	     }
	     if(h==0)
	     printf("no\n");
	     else
	     printf("yes\n");
}

    return 0;
}