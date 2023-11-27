#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    if(fopen("THREENUM.INP", "r")){
        freopen("THREENUM.INP", "r", stdin);
        freopen("THREENUM.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    vector<long long> a(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long max_2ai = -2e18, max_2ai_3aj = -2e18, max_val = -2e18;
    for(int k = 3; k <= n; k++) {
        max_2ai = max(max_2ai, 2*a[k-2]);
        max_2ai_3aj = max(max_2ai_3aj, max_2ai - 3*a[k-1]);
        max_val = max(max_val, max_2ai_3aj + 5*a[k]);
    }

    cout << max_val << "\n";

    return 0;
}
