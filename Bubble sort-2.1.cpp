#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j , i, k, len = 6;
    string str = "PEOPLE";
    int cnt,C = 0,D = 0;

    for(i = 0; i < len-1; i++)
    {
        for (j = 0; j < len-i-1; j++)
        {
            C++;
            if (str[j] > str[j+1])
            {
                char c = str[j+1];
                str[j+1] = str[j];
                str[j] = c;
                D++;
            }
        }
    }
    cout<<"Total comparisons C = "<<C<<endl;
    cout<<"Total interchanges D = "<<D<<endl;
    cout<<"New string "<<str<<endl;


    return 0;
}
