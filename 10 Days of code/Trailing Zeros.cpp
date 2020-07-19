#include<bits/stdc++.h>
using namespace std;
int main () {
	long long n,p,s;
	cin>>n;
	p = 5;
	s = 0;
	while((n/p)>0)
	{
		s = s+ (n/p);
		p=p*5;
	}
	cout<<s;
	return 0;
}

/*

Problem Link : https://hack.codingblocks.com/app/practice/6/1041/problem



Given an integer n, write a function that returns count of trailing zeroes in n!.

Input Format

A single integer N.
Constraints

1 <= N <= 10^9
Output Format

A single integer denoting the count of trailing zeroes in N!
Sample Input

5

Sample Output

1

Explanation

Factorial of 5 is 120 which has one trailing 0.

*/