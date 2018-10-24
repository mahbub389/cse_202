#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MX=1000000;

int main()
{
    string S,T,USR;
    S = "JOHN PAUL JONES";
    T = "A THING OF BEAUTY IS A JOY FOREVER";
    cout<<S<<endl<<T<<endl;
    cout<<"Index of 'JO' in S = "<<S.find("JO")+1<<endl;
    cout<<"Index of 'JO' in T = "<<T.find("JO")+1<<endl;

    cout<<"Index of 'JOY' in S = "<<S.find("JOY")+1<<endl;
    cout<<"Index of 'JOY' in T = "<<T.find("JOY")+1<<endl;

    cout<<"Index of ' JO' in S = "<<S.find(" JO")+1<<endl;
    cout<<"Index of ' JO' in T = "<<T.find(" JO")+1<<endl;

    cout<<"Index of 'A' in S = "<<S.find("A")+1<<endl;
    cout<<"Index of 'A' in T = "<<T.find("A")+1<<endl;

    cout<<"Index of ' A ' in S = "<<S.find(" A ")+1<<endl;
    cout<<"Index of ' A ' in T = "<<T.find(" A ")+1<<endl;

    cout<<"Index of 'THE' in S = "<<S.find("THE")+1<<endl;
    cout<<"Index of 'THE' in T = "<<T.find("THE")+1<<endl;

    return 0;
}
