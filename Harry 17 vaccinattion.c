#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age<=18){
		printf("you are less 18,you can get vaccin:");
	}
	else{
		printf("you cannot get vaccin");
	}
	return 0;
}

