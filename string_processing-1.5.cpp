#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , j , t, k=1,mx;
    string T,P;
    cout<<"Input your string T and then P:\n";
    cin>>T>>P;
    mx = T.size()-P.size()+1;
    while(k<=mx)
    {
        bool ok=false;
        for(i = 1;i<=P.size();i++)
        {
            if(P[i-1]==T[k+i-2])
                continue;
            else {
                ok = true;
                break;
            }
        }
        if(ok) {
            k++;
            continue;
        }
        else{
            cout<<k<<endl;
            break;
        }
    }
    cout<<"P does not contain in T\n";
    return 0;
}


