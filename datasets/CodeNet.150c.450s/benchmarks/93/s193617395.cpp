#include<bits/stdc++.h>
using namespace std;
/*
alias g='g++ -std=c++17 -O2 pra.cpp'
cd programming
cd cpp
cd practice

*/
#define rep(i, n) for(int i=0; i<(n); i++)
using veci = vector<int>;
using ll = long long;
using P = pair<string, int>;
int c[10010];
int a[2020202];
int b[2000200];
struct trump{
    char mark;
    int number, order;
};
trump p[100100];
int partition(trump a[], int w, int r){//配列の最後の要素の値を基準に分割
    int x=p[r].number;
    int i=w-1;//iが小さいほうのまとまりをみる下限
    for (int j=w; j<r; j++){//jが大きいほうのまとまりを見る下限
        if (p[j].number <= x){
            i++;
            swap(p[i], p[j]);
        }
    }
    swap(p[i+1], p[r]);
    return i+1;
}
void quicksort(trump a[], int w, int r){
    if (w<r){
        int q = partition(a, w, r);//基準ごとに大、中、小となるような
        //分割を繰り返し、結局全体で見てソートされているような状態にする
        quicksort(a, w, q-1);
        quicksort(a, q+1, r);
    }
}
int main(){
    int n;
    cin >> n;
    rep(i, n){
        cin >>p[i].mark >> p[i].number;
        p[i].order = i;
    }
    quicksort(p, 0, n-1);
    bool stable_judge = true;
    for (int i=1; i<n; i++){
        if (p[i].number == p[i-1].number && p[i].order < p[i-1].order) stable_judge = false;
    }
    if (stable_judge) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i, n){
        cout << p[i].mark << " " << p[i].number;
        cout << endl;
    }
    return 0;
}
