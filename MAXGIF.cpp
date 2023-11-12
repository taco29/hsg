#include <bits/stdc++.h>
#define v "maxgif"
using namespace std;

int main(){
    if(fopen(v".inp", "r")){
        freopen(v".inp", "r",stdin);
        freopen(v".out", "w",stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, b, sum = 0;
    cin >> n;
    vector<int> a(n + 1);
    cin >> a[1];
    for(int i = 2; i <= n; i++){
        cin >> a[i];
        b = a[i - 1] + a[i];
        if (b > sum){
            sum = b;
        }
    }
    cout << sum;
}
