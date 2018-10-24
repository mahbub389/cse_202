#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MX=1000000;

int main()
{
    string text,Insert,tt;
    text = "AAAAA";
    Insert = "BBB";
    tt=text;
    tt.insert(0, Insert);
    cout<<tt<<endl;
    tt=text;
    tt.insert(2, Insert);
    cout<<tt<<endl;
    tt=text;
    tt.insert(5, Insert);
    cout<<tt<<endl;
    return 0;
}

