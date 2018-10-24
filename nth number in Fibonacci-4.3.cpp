#include <bits/stdc++.h>
using namespace std;

long long precal[100];

long long fib(long long n)
{
    if (precal[n] != 0) return precal[n];

    if(n == 1 || n == 2) return precal[n];

    precal[n] = fib(n-1) + fib(n-2);

    return precal[n];
}

int main()
{
    long long n;
    cin>>n;
    precal[1]=1;
    precal[2]=1;
    cout<<n<<"th fibonacci number is : "<<fib(n)<<endl;
    return 0;
}


