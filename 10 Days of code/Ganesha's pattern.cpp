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

/*
Problem link : - https://hack.codingblocks.com/app/practice/6/1055/problem


Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format

Enter value of N ( >=5 )
Constraints

5 <= N <= 99
Output Format

Print the required pattern.
Sample Input

7

Sample Output

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

*/