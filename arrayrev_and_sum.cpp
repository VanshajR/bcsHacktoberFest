#include<iostream>
using namespace std;
int main(){
	int a[10],i,sum=0;
	cout<<"Enter the elements of array:";
	for(i=0;i<=9;i++){
		cin>>a[i];
	}
	cout<<"Elements of array in reverse order:\n";
	for(i=9;i>=0;i--){
		cout<<a[i]<<endl;
		sum+=a[i];
	}
	cout<<"Sum of elements of array is: "<<sum;
	return 0;
}
