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
        int c=0;
        int key;
        cin>>key;
        bool x=true;
        for(int i=0;i<n;i++)
        {
            c++;
            if(a[i]==key)
            {
                x=false;
                cout<<"Present"<<" "<<c<<endl;
                break;
            }
        }
        if(x)
        {
            cout<<"Not Present"<<" "<<c<<endl; 
        }
    }
    return 0;
}
