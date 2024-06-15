#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter two values:\n");
    scanf("%d %d",&length,&breadth);
    int area = length*breadth;
    printf("The area of this rectangle is %d",area);
    return 0;
}

