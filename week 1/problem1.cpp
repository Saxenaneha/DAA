#include<iostream>
using namespace std;

int main()
{
	int i,key,c=0,n,t,f;
	cin>>t;
	while(t!=0)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>key;
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				cout<<"Present"<<i+1<<endl;
				c=1;
				break;
			}
			else
			{
				c=0;
				f=i+1;
			}
		}
		if(c==0)
		{
			cout<<"Not Present"<<f<<endl;
		}
	}
	t--;
	return 0;
}
