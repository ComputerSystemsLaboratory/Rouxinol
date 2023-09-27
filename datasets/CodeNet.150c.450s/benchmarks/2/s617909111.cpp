#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int partition(vector<int> &a, int p, int r){
    int base = a.at(r);
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(a.at(j) <= base){
            i++;
            int tmp = a.at(i);
            a.at(i) = a.at(j);
            a.at(j) = tmp;
        }
    }
    a.at(r) = a.at(i+1);
    a.at(i+1) = base;
    return i+1;
}



int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a.at(i);
    }
    int index = partition(a, 0, n-1);

    for(int i = 0; i < n-1; i++){
        if(i == index){
            cout << "[" << a.at(i) << "] ";
        }else{
            cout << a.at(i) << " ";
        }
    }
    cout << a.at(n-1) << endl;

}
