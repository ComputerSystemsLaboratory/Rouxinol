#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int n, k;

bool maxLoadingCapa(vector<int> w, int p){
    /*
    input: vector<int> w 荷物の重さ
           int p 各トラックの最大積載量
    output: wをk台のトラックで運べるかどうか

    */
    int weight = 0;
    int k_cnt = 1; //最大積載量がpのときにwを運ぶのに必要となるトラックの台数

    for(int i = 0; i < n; i++){
        if(w.at(i) > p){
            return false;
        }

        int tmp = weight + w.at(i);

        if(tmp > p){
            k_cnt++;
            weight = w.at(i);
            if(k_cnt > k){
                return false;
            }
        }else{
            weight = tmp;
        }
    }

    // cout << k_cnt << " trucks are need! (p = " << p << ")" << endl;
    return true;
}
int main(){
    cin >> n >> k;
    vector<int> w(n);

    int pMax = 0;
    for(int i = 0; i < n; i++){
        cin >> w.at(i);
        pMax += w.at(i);
    }


    int right = pMax;
    int left = 0;

    while(left < right){
        int mid = (right + left) / 2;
        int canLoad = maxLoadingCapa(w, mid);
        // cout << left << " " << right << " " << mid << " " << canLoad << endl;
        if(canLoad == 0){
            left = mid + 1;
        }else if(canLoad == 1){
            right = mid;
        }
    }
    cout << left << endl;

}
