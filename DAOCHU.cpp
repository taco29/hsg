#include <bits/stdc++.h>
#define v "daochu"
using namespace std;

int main() {
    if(fopen(v".inp", "r")){
        freopen(v".inp", "r",stdin);
        freopen(v".out", "w",stdout);
    }
    ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int n;
    cin >> n;
    pair<string, string> s[100];
    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
        cout << s[i].second << " " << s[i].first <<endl;
    }
    return 0;
}
