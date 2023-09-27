#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

void countingSort(vector<int> a, int max){
    vector<int> b(max);

    rep(i, a.size()){
        b.at(a.at(i))++;
    } 

    rep(i, max){
        while(b.at(i) != 0){
            if(i == max - 1 && b.at(i) == 1){
                cout << i << endl;
            }else{
                cout << i << " ";
            }
            b.at(i)--;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    int max = 0;
    rep(i, n){
        cin >> a.at(i);
        if(a.at(i) > max){
            max = a.at(i);
        }
    }
    max++;
    countingSort(a, max);
}
