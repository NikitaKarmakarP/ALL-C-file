#include<stdio.h>
int main(){
	int physics,chemistry,math;
	float  total;
	printf("Enter physics marks:\n");
	scanf("%d",&physics);
	
	printf("Enter Chemistry Marks:\n");
	scanf("%d",&chemistry);
	
	printf("Enter Math marks:\n");
	scanf("%d",&math);
	total = (physics + math + chemistry)/3;
    if((total<40) || physics<33 || math<33 || chemistry<33){
    	printf("Your total percentege is %f and you are failed:\n",total);
	}
	else{
		printf("Your total percentege is %f and you are passed:\n",total);
	}
    return 0;      
}

