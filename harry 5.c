#include<stdio.h>
float main(){
	float r,h,v;
	printf("Enter radius and hight:\n");
	scanf("%f %f",&r,&h);
	v = 3.14*r*r*h;
	printf("The volume of the cylinder is:%f",v);
	return 0;
}
