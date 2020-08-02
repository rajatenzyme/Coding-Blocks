#include <bits/stdc++.h>
using namespace std;
//Naive Recursive approach of 0/1 knapsack
int knapsack (int wt[], int val[], int w, int n)
{
  //Base Condition
  if(n==0 || w==0)
    return 0;
  
  //checking from last element 
  if(wt[n-1]<=w)
    return max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));

  else
    return knapsack(wt, val, w, n-1);
  
}


int main() 
{
  int wt[3] ={10,20,30};
  int val[3] = {60,100,120};
  int w = 50;
  cout<<knapsack(wt, val, w, 3); 
}