#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void maxHeapify(int i,vector<ll> &array){
    int n = array.size() - 1;
    int li = 2 * i,ri = 2 * i +1,large_index=i;
    if(li <= n && array.at(li) > array.at(i)){
        large_index = li;
    }
    if(ri <= n && array.at(ri) > array.at(large_index)){
        large_index = ri;
    }
    if(large_index != i){
        swap(array.at(i),array.at(large_index));
        maxHeapify(large_index,array);
    }
}

void insert(ll key,vector<ll> &array){
    array.push_back(key);
    int i = array.size() - 1;
    while(i > 1 && array.at(i) > array.at(i / 2)){
        swap(array.at(i),array.at(i/2));
        i = i/2;
    }
}

int extract(vector<ll> &array){
    if(array.size() < 2) return -1;
    int n = array.size() - 1;
    ll max = array.at(1);
    array.at(1) = array.at(n);
    array.pop_back();
    maxHeapify(1,array);
    return max;
}

int main(){
    vector<ll> array(1,0);
    while(true){
        string s;
        cin >> s;
        if(s == "insert"){
            //cout << "!!!" << endl;
            int num;
            cin >> num;
            insert(num,array);
        }
        if(s == "extract"){
            int m = extract(array);
            if( m != -1) printf("%d\n",m);
        }
        if(s == "end") break;
    }
}
