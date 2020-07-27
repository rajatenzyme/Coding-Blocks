#include<bits/stdc++.h>
using namespace std;
#define int long long 
void prime_sieve(int *p)
{
    //first mark all odd numbers to be prime only
    for(int i=3;i<=1000000;i += 2)
    {
        p[i] = 1;
    }

    //sieve

    for(int i=3;i<=1000000;i+=2)
    {
        // if curr is not marked (it is prime)
        if( p[i] == 1)
        {
            //mark all multiples to be not prime
            for(int j = i*i; j<=1000000; j = j+i)
            {
                p[j] = 0;
            }
        }
    }
    p[2] = 1;
    p[0] = p[1] = 0;
}

 signed main()
{
int p[1000005] = {0};
prime_sieve(p);
for(int i=0;i<=100;i++)
{
    if(p[i] == 1)
    cout<<i<<" ";
}

}

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
