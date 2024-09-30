#include <stdio.h>

int main() {
 int x;//number of working hours in each day from monday to friday
	int y;//numberof working hours on friday;
	int workinghours=0;
	for(int i=1;i<=5;i=i+1){
	    if(i==5){
	        printf("enter the value of y");
	        scanf("%d",&y);
	      workinghours=workinghours+y; 
	      break;
	    }
	     
	        scanf("%d",&x);
	    workinghours=workinghours+x;
	}
printf("%d",workinghours);



    return 0;
}