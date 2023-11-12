#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st[] = {"RWY","RYW","WRY","WYR","YRW","YWR"};
    string s;
    freopen("BOUGAIN.inp","r",stdin);
    freopen("BOUGAIN.out","w",stdout);
    ios_base::sync_with_stdio();
    cout.tie(0);
    cin.tie(0);
   cin>>s;
   
    int kq=0;
    for (int k=0; k<6; k++)
    {
        string x=st[k];
        string z=s;
        int d=0;
        int i=0;
        while (i<z.size())
        {

            if(z[i]==x[i%3])
            {
                d++;
                i++;
            }
            else z.erase(i,1);
        }
        kq= max(kq,d);
    }


    cout<<kq;
    return 0;
}
