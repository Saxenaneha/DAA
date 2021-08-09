#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
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
		int shift=0;
		int comparisons=0;
		for(int i=1;i<n;i++)
		{
			int current=a[i];
			int j=i-1;
			shift++;
			while(a[j]>current and j>=0)
			{
				shift++;
				comparisons++;
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=current;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl<<"comparisions are = "<<comparisons<<endl<<"shifts  are= "<<shift<<endl;
	}
	return 0;
}
