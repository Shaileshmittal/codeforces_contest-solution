#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        long long n;
        cin>>n;
        vector<long long>v(n);
        map<long long,long long>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        long long p=mp[v[0]],q=mp[v[n-1]];
        if(mp.size()==1)
        {
            cout<<n*(n-1)<<endl;
        }
        else{
            cout<<2*p*q<<endl;
        }
    }
}