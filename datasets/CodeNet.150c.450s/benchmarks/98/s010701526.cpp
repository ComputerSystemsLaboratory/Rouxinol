#include <bits/stdc++.h>
using namespace std;

int main() {


    while(true){

        int n,m;
        cin >> n >> m;
        if(n == 0){
            break;
        }

        vector<int> v1,v2;

        int sum1 = 0,sum2 = 0;

        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            v1.push_back(input);
            sum1 += input;
        }

        for(int i=0; i<m; i++){
            int input;
            cin >> input;
            v2.push_back(input);
            sum2 += input;
        }

        pair<int,int> ans = {200,200};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(sum1 - v1[i] + v2[j] == sum2 - v2[j] + v1[i]){
                    if(ans.first + ans.second > v1[i] + v2[j]){
                        ans = make_pair(v1[i], v2[j]);
                    }
                }
            }
        }

        if(ans.first == 200){
            cout << -1 << endl;
            continue;
        }

        cout << ans.first << " " << ans.second << endl;


    }

    return 0;
}
