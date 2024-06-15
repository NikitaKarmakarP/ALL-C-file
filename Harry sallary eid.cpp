#include<iostream>
using namespace std;

typedef struct employee
{
	/* data */
	int eId;//4
	char favChar;//1
	float salary;//4
}ep;

union money
{
	/* data */
	int rice;//4
	int car;//2
	float pounds;//4
};

int main(){
	enum Meal{breakfast,lunch,dinner};
	Meal m1 = lunch;
	cout<<(m1==2);
	/*cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;*/      
	//struct employee harry;
   	/*union money m1;
	m1.rice = 34;
	m1.car = 'c';
	cout<<m1.rice;
	ep harry;
	struct employee subham;
	struct employee rohan;
	harry.eId = 1;
	harry.favChar = 'c';
	harry.salary = 120000000;
	cout<<"The value is "<<harry.eId<<endl;
	cout<<"The value is "<<harry.favChar<<endl;
	cout<<"The value is "<<harry.salary<<endl;*/
	return 0;
	
}
