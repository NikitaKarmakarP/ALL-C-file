#include<iostream>
using namespace std;
int main(){
    int j,i,temp;
    int a[10]={21,66,42,10,15,2,94,12,14,20};
    for(i=0;i<=8;i++){
        for(j=i+1;i<9;j++){
            if(a[i]>a[j]){//gg
             temp=a[i];
             a[i]=a[j];
             a[j]=temp; 
            }
        }
    }
    for(i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
return 0;
}
