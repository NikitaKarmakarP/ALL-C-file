#include<iostream>

uning namespace std;
int main(){
	int 10;
	int temp;
	cin>>10;
	int arr[10]={56,5,9,88,26,14,55,3,6,45};
	for(int i=0;i<10;i++){
		cin>>arr[10];
	}
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(arr[i]>arr[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
