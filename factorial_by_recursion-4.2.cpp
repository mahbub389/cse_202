#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if (n == 0)
        return 1;
    return  n*fact(n-1);
}
int main()
{
    long long n;
    cout<<"Input a number: ";
    cin>>n;

    long long result = fact(n);

    cout<<"Factorial of "<<n<<" is: "<<result<<endl;
    return 0;
}


