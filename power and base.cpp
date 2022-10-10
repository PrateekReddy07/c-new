#include<iostream>
using namespace std;
int main()
{
	int power,base,r=1;
	cout<<"Enter any number ";
	cin>>power>>base;
	while(power!=0){
	r*=base;
	power--;}
	cout<<r;
	return 0;
}
