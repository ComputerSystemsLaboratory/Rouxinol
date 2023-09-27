#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int p,int r){
    int x = arr.at(r);
    int i = p-1;
    for(int j=p; j<r; j++){
        if(arr.at(j) <= x){
            i++;
            swap(arr.at(i),arr.at(j));
        }
    }
    swap(arr.at(i+1),arr.at(r));
    return i+1;
}

int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i=0; i<n; i++) cin >> array.at(i);
    int par = partition(array,0,n-1);
    for(int i=0; i<n; i++){
        if(i == par){
            cout << "[" <<array.at(i) << "]" ;
        }else{
            cout << array.at(i) ;
        }

        if(i != n-1){
            cout << " ";
        }

    }
    cout << endl;
}
