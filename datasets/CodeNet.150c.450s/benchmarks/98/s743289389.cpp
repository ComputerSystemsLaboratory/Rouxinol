#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    while(1){
        cin >> n >> m;
        if(n == 0)
            break;

        vector<int> taro(n), hana(m);
        int diff = 0;
        for(int i=0; i<n; i++){
            cin >> taro[i];
            diff += taro[i];
        }
        for(int i=0; i<m; i++){
            cin >> hana[i];
            diff -= hana[i];
        }

        int an = -1, am = -1, temp = 1e9;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(2 * (taro[i] - hana[j]) == diff){
                    if(taro[i] + hana[j] < temp){
                        an = i;
                        am = j;
                        temp = taro[i] + hana[j];
                    }
                }
            }
        }

        if(an == -1){
            cout << -1 << endl;
        }else{
            cout << taro[an] << ' ' << hana[am] << endl;
        }
    }
    
    return 0;
}