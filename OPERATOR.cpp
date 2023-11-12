#include <bits/stdc++.h>
using namespace std;

int main(){

#define taskname "Operator"
    if (fopen(taskname".inp", "r")){
        freopen(taskname".inp", "r",stdin);
        freopen(taskname".out", "w", stdout);
}
    ios::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
    if (a == "X++" || a =="++X"){
        x += 1;
    }else if(a =="X--" || a=="--X"){
        x -= 1;
        }
    }
    cout << x;
    return 0;
}
