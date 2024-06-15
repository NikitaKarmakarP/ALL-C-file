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


#include<iostream>
using namespace std;

 class binary
 {
 	// private:
    	string s;
    	void chc_bin(void);
    	
    	public:
    	  void read(void);
    	  void ones(void);
    	void display(void);
	};
	void binary :: read(void){
		cout<<"Enter a binary number"<<endl;
		cin>>s;
	}
	
	void binary :: chk_bin(void){
	}
		for (int i = 0; i < s.length(); i++)
		{
			if(s.at(i)!='0' && s.at(i)!='1'){
				cout<<"Incorrect binary format:"<<endl;
				exit(0);
			}
		}
	}

	void binery :: ones_compliment(void)
	{
		chk_bin();
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i) == '0')
			{
				s.at(i) = '1'{
			}
			else
			{
				s.at(i) = '0';
			}
		}
	}
	
	void binery :: display(void)
	{
		for(int i=0;i<s.length();i++)
		{
			cout<<s.at(i);
		}
		cout<<endl;
	}


	
int main(){
	
	binary b;
	b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
return 0;
}
