#include <bits/stdc++.h>
#define v "CHIAMANG"
#define FOR for(int i = 0; i < n; i++)
using namespace std;

int main(){
    if(fopen(v".inp", "r")){
        freopen(v".inp", "r", stdin);
        freopen(v".out", "w", stdout);
    }
    ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int n, sum = 0, x;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> x;
        sum += x;
        a[i] = sum;
    }
    if(sum % 2 == 0){
        for(int j = 1; j < n; j++){
            if(a[j] == sum / 2){
                cout << j;
                break;
            }
			if(a[j] >= sum / 2){
                cout << "0";
                break;
                }
            }
    }else{
        cout << "0";
    }
    return 0;
}
