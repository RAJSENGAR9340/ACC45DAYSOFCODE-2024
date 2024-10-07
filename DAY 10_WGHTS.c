
#include <stdio.h>

int main()
{
    int x,y,z,w;
    int t;
    scanf("%d",&t);
   for(int i=1;i<=t;i=i+1){
      int  h=0;
	    scanf("%d",&w);
	    scanf("%d",&x);
	    scanf("%d",&y);
	    scanf("%d",&z);
	   if(x+y+z==w)
	   h=1;
	   else if (x+y+z!=w){
	       if(x+y==w)
	       h=1;
	       if(y+z==w)
	       h=1;
	       if(z+x==w)
	       h=1;
	       if(x==w)
	       h=1;
	       if(y==w)
	       h=1;
	       if(z==w)
	       h=1;
	   }
	   if(h==1)
	   printf("yes");
	   else if (h==0)
	   printf("no");
	}

    return 0;
}