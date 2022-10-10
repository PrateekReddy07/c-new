#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter any number ";
	cin>>n;
	for(i=0;i<=n;i++){
	
	if(n%i==0){
		c++;
	}}
	if(c==2)
	{
		cout<<"its  a prime number";
	}
	else
	{
		cout<<"its not a prime number";
	}
	return 0;	
}
