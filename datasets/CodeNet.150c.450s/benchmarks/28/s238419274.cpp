#include <iostream>
#include <vector>

using namespace std;

int check(int num, int k, vector<int> &v){
    int i = 0;
    for (int j = 0; j < k; ++j) {
        int sum = 0;
        while (sum + v[i] <= num){
            sum += v[i];
            i++;
            if (i == v.size())return true;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> w;
    int sum = 0;
    for (int i = 0; i < n; ++i){
        int weight;
        cin >> weight;
        sum += weight;
        w.push_back(weight);
    }

    int left = 0,right = sum;
    while (left < right){
        int mid = (left + right) / 2;
        if (check(mid,k,w)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    cout << right << endl;

    return 0;
}