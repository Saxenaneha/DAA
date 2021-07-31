#include<iostream>
using namespace std;
int main()
{
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

        bool x=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //binary search to find the sum
                int k=a[i]+a[j];
                int low=j+1;
                int high=n-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(a[mid]==k)
                    {
                        x=true;
                        cout<<i+1<<" "<<j+1<<" "<<mid+1<<endl;
                        break;
                    }
                    else if(a[mid]>k)
                    {
                        high=mid-1;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                if(x==true)
                {
                    break;
                }
            }
            if(x==true)
            {
                break;
            }
        }
        if(x==false)
        {
            cout<<"No Sequence found"<<endl;
        }
    }
    return 0;
}
