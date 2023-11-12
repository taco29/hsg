#include <bits/stdc++.h>
using namespace std;

int main(){
#define taskname "EvenOdd"
    if (fopen(taskname".inp", "r")){
        freopen(taskname".inp", "r",stdin);
        freopen(taskname".out", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> b;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        b.push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(b[i] % 2 ==0){
            cout << "Even"<< endl;
        }else{
            cout << "Odd" <<endl;
        }
    }
    return 0;
}
