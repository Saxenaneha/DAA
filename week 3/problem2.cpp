#include <iostream.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int swaps=n-1;
		int comparison=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				comparison++;
				if(a[j]<a[i])
				{
					swap(a[i],a[j]);
				}
			}
		}
			for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl<<"comparisions = "<<comparison<<endl<<"swaps = "<<swaps<<endl;
	}
	return 0;
}
