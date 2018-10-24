#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int info;
    node *next;
};

node *start=NULL;
node *End=NULL;

void Insert(int value)
{
    node *p,*tmp;
    p = new node;
    p->info = value;
    p->next = NULL;
    if(start == NULL)
        start=p;
    else
        End->next=p;
    End=p;
}

void showdata()
{
    node *temp = start;
    if(start==NULL)
    {
        cout<<"List is empty\n";
        return ;
    }
    while(temp->next!=NULL)
    {
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<temp->info<<endl;
}

void Delete(int x,int& y)
{
    node *tmp , *ptr;

    ptr = start;
    if(ptr->info==x)
    {
        start = ptr->next;
    }
    else
    {
        while(ptr->info != x)
        {
            if(ptr->next==NULL)
            {
                cout<<"Number not Found\n";
                y=1;
                break;
            }
            tmp=ptr;
            ptr=ptr->next;
        }
        tmp->next = ptr->next;
    }
    while(ptr->next!=NULL) ptr=ptr->next;
    End=ptr;
}

int main()
{
    int n , i , value;
    cout<<"Enter initial data: ";
    cin>>n;
    for(i = 1 ; i <= n ; i++)
    {
        Insert(i*2);
    }
    showdata();
    while(true)
    {
        char ch = getchar();
        ///cout<<"\nPress Enter to view menu\n\n";
        char c = getchar();
        cout<<"\nPress 1 to show list:\n";
        cout<<"Press 2 to add no to list:\n";
        cout<<"Press 3 to delete a no from list:\n";
        cout<<"Press any other to exit\n\n";
        int k,val;
        cin>>k;
        if(k == 1)
        {
            showdata();
        }
        else if(k==2)
        {
            cout<<"Enter number: ";
            cin>>val;
            Insert(val);
            cout<<"number added successfully\n";
        }
        else if( k ==3)
        {
            if(start==NULL)
                cout<<"List is empty\n";
            else
            {
                cout<<"Enter number: ";
                cin>>val;
                int c=0;
                Delete(val,c);
                if(!c)cout<<"Successfully deleted\n";
            }
        }
        else break;
    }
    return 0;
}
