#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 1; i <= n; i++)
#define cc "matkhau"
using namespace std;

bool check(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    f();
    if(fopen(cc".inp", "r")){
        freopen(cc".inp","r",stdin);
        freopen(cc".out", "w", stdout);
    }
    string s;
    getline(cin, s);
    string rs = "";
    for(int  i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            rs += s[i];
        }
    }
    int maxprime = -1;
    for(int i = 1; i <= rs.size(); i++){
        for(int j = 0; j <= rs.size() - i; j++){
            int kq = stoi(rs.substr(j, i));
            if(check(kq) && kq > maxprime){
                maxprime = kq;
            }
        }
    }
    cout << maxprime;
    return 0;
}
