#include<iostream>
using namespace std;
int main()
{
	int n,i,s=0;
	cout<<"Enter any number ";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(n==s)
	{
		cout<<"its a perfect number";
	}
	else
	{
		cout<<"its not a perfect number";
	}
	return 0;
}
