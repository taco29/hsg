#include<bits/stdc++.h>
#define v "diemso"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}
int main()
{
	if(fopen(v".inp", "r"))
	{
    freopen(v".inp","r",stdin);
    freopen(v".out","w",stdout);
	}
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    string s[102];
    pair<int,int>a[105];
    int n;
    cin>>n;
    int x,y;
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
        a[i].first=i;
        cin>>x>>y;
        a[i].second=x+y;
    }

    sort(a+1,a+n+1,cmp);
    int xephang[105];
    xephang[a[1].first]=1;
    for(int i=2; i<=n; i++)
    {
        if (a[i].second!=a[i-1].second)
            xephang[a[i].first]=i;
        else xephang[a[i].first]=xephang[a[i-1].first];
    }
    for(int i=1; i<=n; i++)
        cout<<s[i]<<" " <<xephang[i]<<endl;

    return 0;
}
