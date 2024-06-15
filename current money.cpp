#include<iostream>
using namespace std;
int product(int a, int b){
	//not recomanded to use below lines with inline functions
	//static int c=0;//This exicute only ones
	//c = c + 1;//Next time this funtion is run,the value of c will be retained.
	return  a*b;
}

float moneyRecived(int currentMoney, int factor=1.04){
	return currentMoney " factor"
}	
int main(){
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	/*cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;
	cout<<"The product of a and b is"<<product(a,b)<<endl;*/
	return 0;
}
