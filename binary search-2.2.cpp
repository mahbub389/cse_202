#include <bits/stdc++.h>
using namespace std;

int B_search(int A[],int p)
{
    int hi=13,lo=0;
    while(lo<hi)
    {
        int mid = (lo+hi)/2;
        if(A[mid]==p){
            return mid;
        }
        else if(p>A[mid])
            lo = mid+1;
        else hi = mid;
    }
    return -1;
}

int main()
{
    int arr[]={11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    int num,len = 13;
    cout<<"Input a number to view it's position:\n";
    while(cin>>num) cout<<B_search(arr,num)+1<<endl;
    return 0;
}
