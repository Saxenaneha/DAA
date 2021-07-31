#include<iostream>
using namespace std;

int main()
{
	int t,i,j,n,key,k;
	while(t!=0)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>key;
		for(i=0,j=n-1;i!=j;i++,j--)
		{
			k=n/2;
			if(a[k]==key)
			{
				cout<<"Present"<<k<<endl;	
			}
			else if(a[i]==key)
			{
				cout<<"Present"<<i+1<<endl;
			}
			else if(a[j]==key)
			{
				cout<<"Present"<<j-1<<endl;
			}
			else 
			{
				cout<<"Not Present"<<n<<endl;
			}
		}
	}
	t--;
}
