#include<iostream>
using namespace std;
int main(){
    int marks[5] = {78,89,66,99,90};
    int mathmarks[4];
    mathmarks[0] = 345;
    mathmarks[0] = 678;
    mathmarks[0] = 789;
    mathmarks[0] = 453;
    std::cout<<"These are math marks"<<endl;
    std::cout<<mathmarks[0]<<endl;
    std::cout<<mathmarks[1]<<endl;
    std::cout<<mathmarks[2]<<endl;
    std::cout<<mathmarks[3]<<endl;
    std::cout<<mathmarks[4]<<endl;
  
    //you can change the value of array
    marks[2] = 445;
    std::cout<<"These are marks"<<endl;
  
    /*std::cout<<marks[0]<<endl;
    std::cout<<marks[1]<<endl;
    std::cout<<marks[2]<<endl;*/
    //std::cout<<marks[3]<<endl;
    //std::cout<<marks[4]<<endl;

    for(int i=0;i<4;i++)
	{
        std::cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    // Quick quize:do the same using while and do while loops 
    //Pointers and arrays:
int* p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<"The value of marks[0]is"<<*p<<endl;
cout<<"The value of marks[0]is"<<*(p+1)<<endl;
cout<<"The value of marks[0]is"<<*(p+2)<<endl;
cout<<"The value of marks[0]is"<<*(p+3)<<endl;
return 0;
}
   
