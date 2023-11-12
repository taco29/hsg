#include <bits/stdc++.h>
#define v "fibostr"
using namespace std;

int main() {
	 if(fopen(v".inp", "r")){
        	freopen(v".inp", "r",stdin);
        	freopen(v".out", "w",stdout);
    }
    ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int n;
    string a, b;
    cin >> a >> b;
    cin >> n;
    string result;

    if (n == 1) {
        cout << a;
    }
    if (n == 2) {
        cout << b;
    }
        for (int i = 3; i <= n; i++){
            result = b + a;
            a = b;
            b = result;
    }
    cout << result;
    return 0;
}
