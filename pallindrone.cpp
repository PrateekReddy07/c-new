#include<iostream>
using namespace std;
int main()
{
	int n,temp,a=0,r;
	cout<<"Enter any number";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		 r=n%10;
		 a=a*10+r;;
		 n=n/10;
	}
	n=temp;
	if(n==a)
	{
		cout<<"Its a pallindrone number";
	}
	else
	{
		cout<<"Its not a pallindrone";
	}
	return 0;
}
