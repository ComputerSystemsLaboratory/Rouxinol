#include<iostream>
using namespace std;

int main()
{
    int n, m;
    int taro[100];
    int hana[100];
    int taro_sum;
    int hana_sum;
    int taro_ans, hana_ans;
    cin >> n >> m;
    while(n && m){
        taro_sum = 0;
        hana_sum = 0;
        taro_ans = -1;
        hana_ans = -1;
        for(int i=0;i<n;++i){
            cin >> taro[i];
            taro_sum += taro[i];
        }
        for(int i=0;i<m;++i){
            cin >> hana[i];
            hana_sum += hana[i];
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(hana_sum - hana[j] + taro[i] == taro_sum - taro[i] + hana[j] && (taro_ans == -1 || taro_ans + hana_ans > taro[i] + hana[j])){
                        taro_ans = taro[i];
                        hana_ans = hana[j];
                }
            }
        }
        if(taro_ans == -1){
            cout << -1 << endl;
        }else{
            cout << taro_ans << " " << hana_ans << endl;
        }
        cin >> n >> m;
    }
    return 0;
}