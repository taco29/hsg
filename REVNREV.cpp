#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 1; i <= n; i++)
#define cc "revnrev"
using namespace std;

int main(){
    f();
    if(fopen(cc".inp", "r")){
        freopen(cc".inp","r",stdin);
        freopen(cc".out", "w", stdout);
    }
    ll k;
    int n, u, v, l, r, chuki = 0;
    cin >> n >> k ;
    cin >> u >> v >> l >> r;
    vector<int> a(n+1), b(n+1);
    FOR{
    	 a[i] = i;
         b[i] = i;
	}
    while (a != b || chuki == 0) {
        chuki++;
        reverse(a.begin() + u, a.begin() + v + 1);
        reverse(a.begin() + l, a.begin() + r + 1);
        if (chuki == k) break;
    }
    
    if (chuki < k) {
        k %= chuki;
        for(int i = 0; i < k; i++) {
            reverse(a.begin() + u, a.begin() + v + 1);
            reverse(a.begin() + l, a.begin() + r + 1);
        }
    }
    FOR{
         cout << a[i] << endl;
    }
    return 0;
}

