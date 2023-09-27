#include <iostream>
#include <vector>
using namespace std;

bool ok(vector<int> w, int k, int p){
    vector<int>::iterator it = w.begin();
    int sum = 0;
    int num = 1;
    while(it!=w.end()){
        if(*it > p) return false;
        if(sum+*it > p){
            num++;
            sum = 0;
        }
        sum += *it;
        it++;
    }
    if(k>=num)
        return true;
    else
        return false;
}




int min_sufficient_load(vector<int> w, int k){
    int left = 0;
    int right = 1000000000;
    int mid;
    while(left<right-1){
        mid = (left+right)/2;
        if(ok(w,k,mid)){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    return right;
}



int main(){
    int n; cin >> n;
    int k; cin >> k;
    vector<int> weight(n);
    for(int i= 0;i<n;i++){
        cin >> weight[i];
    }
    cout << min_sufficient_load(weight,k) << endl;
}