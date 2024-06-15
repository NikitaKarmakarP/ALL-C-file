#include<iostream>
using namespace std;
int main(){
    int marks[5] = {78,89,66,99,90};
    int mathmarks[4];
    mathmarks[0] = 345;
    mathmarks[0] = 678;
    mathmarks[0] = 789;
    mathmarks[0] = 453;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //you can change the value of array
    marks[2] = 445;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    return 0;   
}
