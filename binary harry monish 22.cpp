#include<iostream>
using namespace std;

 class binary{
 	
    	string s;
    	
    	public:
    	  void read(void);
    	  void chc_bin(void);
	};
	void binary :: read(void){
		cout<<"Enter a binary number"<<endl;
		cin>>s;
	}
	
	void binary :: chk_bin(void){
		for (int i = 0; i < s.length(); i++)
		{
			if(s.at(i)!='0' && s.at(i)!='1'){
				cout<<"Incorrect binary format:"<<endl;
				exit(0);
			}
		}
	}
	
int main(){
	//OOPs - Classes and objects
	//C+ ----> initially called------>C with classes by stroustroup
	//Structures had limitations
	//     --------> members are public
	//     --------> No methods
	// classes = structures + more;
	// classes ---> can have methods and properties
	// classes ----> can make for members as private & few as public
	// structures in c++ are typedefed
	// you can decleared objects along with the classes decleration like this:
	   /* class employee{
	       //class definition
	   } harry,rohan,moish;*/
	// harry.salary = it makes no sense if salary is private
	
	//Nesting of number functions
	binary b;
	b.read();
    b.chk_bin();

return 0;
}
