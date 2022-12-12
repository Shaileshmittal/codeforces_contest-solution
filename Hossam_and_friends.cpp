#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        vector<long long>a(n+1,0);
        for(long long i=1;i<=m;i++)
        {
            long long x,y;
            cin>>x>>y;
            if(x>y)
            {
                swap(x,y);
            }
            a[y]=max(x,a[y]);
        }
        long long last=0,ans=0;
        for(long long i=1;i<=n;i++)
        {
            last=max(last,a[i]);
            ans+=(i-last);
        }
        cout<<ans<<endl;
    }
}