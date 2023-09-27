#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> *a,int p,int r){
    int x = (*a).at(r);
    int i = p-1;
    for(int j = p;j<r;j++){
        if((*a).at(j) <= x){
            i++;
            swap((*a).at(i),(*a).at(j));
        }
    }

    swap((*a).at(i+1),(*a).at(r));
    return i + 1;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++) cin >> a.at(i);
    int res = partition(&a,0,n-1);
    for(int i = 0; i < n; i++){
        if(i) cout << " ";
        if(i != res){
            cout << a.at(i);
        }else{
            cout << "[" << a.at(i) << "]";
        }
    }
    cout << endl;
    return 0;
}
