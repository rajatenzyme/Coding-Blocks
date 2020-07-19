#include<iostream>
using namespace std;
int main() {
	int n,i,rows;
	cin>>n;

	//First Component

	cout<<"*";
	for(i=1;i<=(n-3)/2;i++)
	{
		cout<<" ";
	}
	for(i=1;i<=(n+1)/2;i++)
	{
		cout<<"*";
	}
	cout<<endl;

	//Second Component

	for(rows =1 ;rows<=(n-3)/2;rows++)
	{
		cout<<"*";
		for(i=1;i<=(n-3)/2;i++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	//Third Component

	for(i=1;i<=n;i++)
	{
		cout<<"*";
	}
	cout<<endl;

	//Fourth Component

	for(rows = 1 ;rows<=(n-3)/2;rows++)
	{
		for(i=1;i<=(n-1)/2;i++)
		{
			cout<<" ";
		}

		cout<<"*";
		for(i=1;i<=(n-3)/2;i++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	//Fifth Component

	for(i=1;i<=(n+1)/2;i++)
	{
		cout<<"*";
	}
	for(i=1;i<=(n-3)/2;i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	return 0;
}