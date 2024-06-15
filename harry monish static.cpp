#include<iostream>
using namespace std;   

class Employee{
	int id;
	static int count:
	int count;
	public:
		void setData(void){
			cout<<"Enter the id"<<endl;
			cin>>id;
			count++;
		}
        void getData(void){
	        cout<<"The id of the employee is "<<id<<endl and this is employee number"<<count<<endl;
       }
	
};

int Employee :: count; // default value is 0;
int main(){
	Employee harry,rohan,monish;
	//harry id = 1;
	//harry.cout=1; // coanot do this as id and count are private;
    
	harry.setData();
	harry.getData()
	
	return 0;
	
}
