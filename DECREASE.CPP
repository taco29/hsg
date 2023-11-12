#include<bits/stdc++.h>
#define v "decrease"
using namespace std;

int main(){
    if(fopen(v".inp", "r"))
        freopen(v".inp","r",stdin);
        freopen(v".out","w",stdout);
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

    int n, count = 0;
    cin >> n;
    while( n > 0){
        int a = 0;
        int b =  n;
        while (b > 0){
            int tach = b % 10;
            a = max(a, tach);
            b /= 10;
        }
        n -= a;
        count++;
    }
    cout << count;
    return 0;
}
