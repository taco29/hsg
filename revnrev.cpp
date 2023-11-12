#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define cc "revnrev"
using namespace std;

int main(){
    f();
    if(fopen(cc".inp", "r")){
        freopen(cc".inp","r",stdin);
        freopen(cc".out", "w", stdout);
    }
    ll n;
    int k, u, v, l, r;
    cin >> n >> k ;
    cin >> u >> v >> l >> r;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
    	 a[i] = i;
	}
    for(int i = 0; i < k; i++) {
        reverse(a.begin() + u, a.begin() + v + 1);
        reverse(a.begin() + l, a.begin() + r + 1);
    }
    for(int i = 1; i <= n; i++){
         cout << a[i] << endl;
    }
    return 0;
}
//10/20