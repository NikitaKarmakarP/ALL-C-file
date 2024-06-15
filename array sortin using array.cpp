#include<iostream>
using namespace std;

int main(){
	int i,j,temp;
	int arr[5]={5,3,2,4,1};
	int l=5;
	for(j=0;j<l;i++){
		cout<<arr[j]<<" "<<endl;
	}
	for(i=0;i<(l-1);i++){
	    for(j=0;j<(l-1-i);j++){
	    	if(arr[j+1]<arr[j]){
	    		temp = arr[j+1];
	    		arr[j+1]=arr[j];
	    		arr[j]=temp;
			}
		}
	}
	for(j=0;j<l;i++){
		cout<<arr[j]<<" "<<endl;
	}
	return 0;
}

