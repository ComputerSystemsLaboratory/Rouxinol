#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void maxHeapify(vector<ll> &arr,int i,int n){
    int left_index = 2 * i ;
    int right_index = 2 * i + 1;
    int large_index = i;
    //printf("%d %d %d\n",left_index,right_index,large_index);
    if(left_index <= n && arr.at(left_index) > arr.at(i)){
        large_index = left_index;
    }
    if(right_index <= n && arr.at(right_index) > arr.at(large_index)){
        large_index = right_index;
    }

    if(large_index != i){
        swap(arr.at(i),arr.at(large_index));
        maxHeapify(arr,large_index,n);
    }    

}

void build(vector<ll> &arr,int n){
    for(int i=n/2;i>=1;i--){
        maxHeapify(arr,i,n);
    }
}

int main(){
    int n;
    cin >> n;
    vector<ll> array(n+1);
    for(int i=1;i<=n;i++){
        cin >> array.at(i);
    }
    build(array,n);
    for(int i=1;i<=n;i++) cout << " " << array.at(i);
    cout << endl;
}
