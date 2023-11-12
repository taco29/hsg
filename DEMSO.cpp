#include <bits/stdc++.h>
#define v "demso"
using namespace std;

int main() {
    if(fopen(v".inp", "r")){
        freopen(v".inp", "r", stdin);
        freopen(v".out", "w", stdout);
    }
    int n;
    vector<int> count;
    while(cin >> n){
        count.push_back(n);
    }
        cout <<count[count.size() /2];
    return 0;

}
