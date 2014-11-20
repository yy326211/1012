#include<iostream>
using namespace std;
void convert(int n,int r)
{
	int num_aftercovert[20]={0};
	int i,icon;
    if(n>=0)
	{
		icon=1;
		for(i=0;i<20;i++)
		{
			num_aftercovert[i]=n%r;
			n=n/r;
		}
	}
	if(n<0)
	{
		icon=-1;
		n=-1*n;		
		for(i=0;i<20;i++)
		{
			num_aftercovert[i]=n%r;
			n=n/r;
		}
	}
	i=19;
	while(num_aftercovert[i]==0&&i!=0)
		i--;
	if(icon==1)
	for(int j=i;j>=0;j--)
	{
		switch(num_aftercovert[j])
		{
		case 10:cout<<"A";break;
        case 11:cout<<"B";break;
        case 12:cout<<"C";break;
        case 13:cout<<"D";break;
        case 14:cout<<"E";break;
		case 15:cout<<"F";break;
		default:cout<<num_aftercovert[j];
		}
	}
	else
	{
		cout<<"-";
		for(int j=i;j>=0;j--)
		{
		switch(num_aftercovert[j])
		{
		case 10:cout<<"A";break;
        case 11:cout<<"B";break;
        case 12:cout<<"C";break;
        case 13:cout<<"D";break;
        case 14:cout<<"E";break;
		case 15:cout<<"F";break;
		default:cout<<num_aftercovert[j];
		}
	}
}
}
int main()
{
	int line,N[100],R[100];
	cin>>line;
	for(int i=0;i<line;i++)
	{
		cin>>N[i];
		cin>>R[i];
	}
	for(int i=0;i<line;i++)
	{
		convert(N[i],R[i]);
		cout<<endl;
	}
    
	system("pause");
	return 0;
}