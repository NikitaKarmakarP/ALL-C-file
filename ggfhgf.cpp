#include<iostream>
using namespace std;

int main(){
    //cout<<"This is tutorial line;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if((age<18)&&(age>0)){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;
}
