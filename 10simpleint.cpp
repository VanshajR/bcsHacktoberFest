#include<iostream>
using namespace std;
int main(){
	int p,r,t,s;
	cout<<"enter principal amount:";
	cin>>p;
	cout<<"enter rate of interest:";
	cin>>r;
	cout<<"enter time:";
	cin>>t;
	s=(p*r*t)/100;
	cout<<"simple interest is:"<<s;
	return 0;
}
