#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MX=1000000;

int main()
{
    string ss,T="THE STUDENT IS ILL";
    cout<<"Enter 'VERY ILL' or 'ILL TODAY' or 'VERY ILL TODAY' to view the changes:\n";
    getline(cin,ss);
    cout<<T.replace(15,ss.size(),ss);
    return 0;
}


