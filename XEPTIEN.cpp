#include <bits/stdc++.h>
#define FOR for(int i = 0;i < n; i++)
#define v "xeptien"
using namespace std;

bool sosanh(pair<int, int> p1, pair<int, int> p2){
    if(p1.second == p2.second){
        return p1.first > p2.first;
    }
    return p1.second < p2.second;
}
int main(){
    if(fopen(v".inp", "r")){
        freopen(v".inp", "r", stdin);
        freopen(v".out", "w", stdout);
    }
    ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    vector<pair<int, int> > doanhthu;
    int n;
    cin >> n;
    FOR{
        int goivon, lai;
        cin >> goivon >> lai;
        doanhthu.push_back(make_pair(goivon, lai));
    }
    sort(doanhthu.begin(), doanhthu.end(), sosanh);
    for(int i = 0; i < doanhthu.size(); i++){
        cout << doanhthu[i].first << " " << doanhthu[i].second << endl;
    }
    return 0;
}
