#include<iostream>
using namespace std;

void Tower_of_hanio(int n,char Sour, char Aux,char Des)
{
	if(n==1){
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	Tower_of_hanio(n-1,Sour,Des,Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	Tower_of_hanio(n-1,Aux,Sour,Des);
}

int main()
{
	int n;
	cout<<"Enter no. of disks:";
	cin>>n;
	Tower_of_hanio(n,'A','B','C');
	return 0;
}
