#include <bits/stdc++.h>
#define v "game"
using namespace std;
int main(){
	if(fopen(v".inp", "r")){
        freopen(v".inp", "r",stdin);
        freopen(v".out", "w",stdout);
    }
    ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int a, b, a1, b1;
    cin >> a >> b;
    if(a >= b){
        a1 = a;
        a--;
    }else{
        b1 = b;
        b--;
    }
	if(a >= b){
        cout<<a1 + a;
    }else{
        cout<<b1 + b;
	}
    return 0;
}
//19/20 lol