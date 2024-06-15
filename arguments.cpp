#include<iostream>
using namespace std;

//Function prototype
//type function-name (arguments);
//int sum(int a, int b);//---->acceptable
//int sum(int a, b);//---->acceptable nahi hai
int sum(int, int);//---->acceptable
//void g(void);//------->accepteble
void g();//------->accepteble
int main(){
    int num1,num2;
    std::cout<<"Enter first number"<<endl;
    std::cin>>num1;
    std::cout<<"Enter second number"<<endl;
    std::cin>>num2;
    //num1 and num2 are actual paramiters:
    std::cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
    }
    
    int sum(int a,int b){
        //Formal parameters a and b will be taken values from actual parameters num1 
        //and num2
    	int c = a+b;
    	return c;
	}

    void g(){
        std::cout<<"\nHello, Good Morning";
    }
  
