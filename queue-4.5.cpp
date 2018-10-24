#include <bits/stdc++.h>
using namespace std;
#define mx 11
int front, rear;
queue<char> Q;
char Queue[mx];
bool IsEmpty()
{
    int cnt = 0;
    for (int i = 0; i < 5; i++)
        if(isalpha(Queue[i])) cnt++;
    if (cnt == 0) return true;
    return false;
}
void add()
{
    char ch;
    printf("\nEnter value to be inserted : ");
    cin>>ch;
    if ((rear+1)%mx == front){
        cout<<"Overflow...! No element can be inserted."<<endl;
        return;
    }
    else if (IsEmpty()) front = rear = 0;
    else rear = (rear + 1)%mx;
    Queue[rear] = ch;
}
void Delete()
{
    if (IsEmpty()) return;
    else if(front == rear) front = rear = -1;
    else front = (front+1)%mx;
}
void display()
{
    if ((front == -1) && (rear == -1)){
        printf("\nQueueue is empty");
        return;
    }
    for (; front <= rear; front++)
        printf("%c ", Queue[front]);
    cout<<endl;
    front = 0;
}
int main()
{
    char ch;
    int n;
    while (true)
    {
        printf("\n1 - Insert an element into Queueue");
        printf("\n2 - Delete an element from Queueue");
        printf("\n3 - Display Queueue elements");
        printf("\n4 - Exit");
        printf("\nEnter your choice : ");
        cin>>n;

        if (n == 1) add();
        else if (n == 2) Delete();
        else if (n == 3) display();
        else if (n == 4) break;
        else cout<<"Wrong choice"<<endl;
    }
    return 0;
}
