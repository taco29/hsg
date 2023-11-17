#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define enl "\n"
#define vu "VNUMBER"
using namespace std;

bool check(int n){
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum +=i;
        }
    }
    if(sum > n){
        return true;
    }else{
        return false;
    }
}

int main() {
    f();
    if(fopen(vu".inp", "r")){
        freopen(vu".inp","r",stdin);
        freopen(vu".out", "w", stdout);
    }
    long l, r;int count = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(check(i)){
            count++;
        }
    }
    if(count == 0){
        cout << "-1";
    }else{
        cout << count;
    }
    return 0;
}
