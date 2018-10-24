#include <bits/stdc++.h>
using namespace std;

int main()
{
    string LINE = "AAABBB";
    cout<<LINE.erase(1,2)<<endl;

    LINE = "JOHN PAUL JONES";
    cout<<LINE.erase(5,5)<<endl;

    LINE = "AAABBB";
    int l = LINE.find("AA");
    cout<<LINE.replace(l, 2,"BB")<<endl;

    LINE = "JOHN PAUL JONES";
    l = LINE.find("PAUL");
    cout<<LINE.replace(l,4,"DAVID")<<endl;
    return 0;
}

