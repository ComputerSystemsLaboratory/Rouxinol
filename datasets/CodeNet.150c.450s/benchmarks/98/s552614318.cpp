#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int taro[100],hanako[100];
    int n,m;
    while(cin >> n >> m,n){
        int t_sum=0,h_sum=0;
        pair<int,int> ret(100,100);
        int a;
        for(int i=0;i<n;i++){
            cin >> taro[i];
            t_sum += taro[i];
        }
        for(int i=0;i<m;i++){
            cin >> hanako[i];
            h_sum += hanako[i];
        }
        int dif = t_sum - h_sum;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(abs(dif) == 2*abs(taro[i] - hanako[j])){
                    if(dif == 0 && taro[i] == hanako[j]){
                        if(ret.first + ret.second > taro[i] + hanako[j]){
                            ret = make_pair(taro[i],hanako[j]);
                        }
                    }
                    if(dif < 0 && taro[i] < hanako[j]){
                        if(ret.first + ret.second > taro[i] + hanako[j]){
                            ret = make_pair(taro[i],hanako[j]);
                        }
                    }
                    if(dif > 0 && taro[i] > hanako[j]){
                        if(ret.first + ret.second > taro[i] + hanako[j]){
                            ret = make_pair(taro[i],hanako[j]);
                        }
                    }
                }
            }
        }
        if(ret.first == 100 && ret.second == 100) cout << -1 << endl;
        else cout << ret.first << " " << ret.second << endl;
    }
    return 0;
}