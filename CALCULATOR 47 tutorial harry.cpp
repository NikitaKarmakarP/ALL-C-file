#include<iostream>
#include<cmath>
using namespace std;

/*
creat 2 classes:
  1.SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using 
  another function.
  2.ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your 
  choice and display the results using another function.
  
  creat another class HybridCalculator and inherit it using  these 2 classes:
  Q1. What type of inheritance are you using? //-----> multiple inheritance
  Q2. Which mode of inheritance are you using?//-----> public SimpleCalculator,public Scientific
  Q3. Create an object of HyberidCalculator and display results of simple and scientific calculator.//
  Q4. How is code reusability impleemented?
  -->isko code reuseibility bolti hai.
  
  */

class SimpleCalculator {
	int a,b;
	public:
		void getDataSimple(){
			cout<<"Enter the value of a"<<endl;
			cin>>a;
			cout<<"Enter the value of b"<<endl;
			cin>>b;
		}
		
		void performOperationsSimple(){
			cout<<"The value of a + b is: "<<a + b<<endl;
			cout<<"The value of a - b is: "<<a - b<<endl;
			cout<<"The value of a * b is: "<<a * b<<endl;
			cout<<"The value of a / b is: "<<a / b<<endl;
		}
};

class ScintificCalculartor{
	int a,b;
	public:
		void getDataScientific(){
			cout<<"Enter the value of a"<<endl;
			cin>>a;
			cout<<"Enter the value of b"<<endl;
			cin>>b;
		}
		
		void performOperationsScientific()
		{
		    cout<<"The value of cos(a) is: "<<cos(a)<<endl;
			cout<<"The value of sin(a) is: "<<sin(a)<<endl;
			cout<<"The value of exp(a) is: "<<exp(a)<<endl;
			cout<<"The value of tan(a) is: "<<tan(a)<<endl;	
		}
};

class HybridCalculator : public SimpleCalculator, public ScintificCalculator{
	
};
int main()
{
	/*SimpleCalculator calc;
	ScintificCalculartor calc;
	calc.getData();
	calc.performOperations();*/
	HybridCalculator calc;
	calc.getDataScintific();
	calc.performOperationsScientific();
	calc.getDataSimple();
	calc.performOperationsSimple();
	return 0;
}
