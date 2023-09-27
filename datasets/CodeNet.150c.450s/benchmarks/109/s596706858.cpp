#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> a, vector<int> b){
    return a[0] < b[0];
}

int time(string str){  //入力形式に対して秒を返す

    //hh:mm:ss
    int s = (int)str[7] - '0' + ((int)str[6] - '0')*10;
    int m = (int)str[4] - '0' + ((int)str[3] - '0')*10;
    int h = (int)str[1] - '0' + ((int)str[0] - '0')*10;
    
    return s + 60*m + 3600*h;
}

int main(){

    while(1){

        int n; cin >> n;
        if(!n) break;

        vector<vector<int> > train(2*n, vector<int> (2));
        

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            train[i][0] = 2*time(s) + 1;
            train[i][1] = 1;
            cin >> s;
            train[n + i][0] = 2*time(s) - 1;
            train[n + i][1] = -1;
        }

        sort(train.begin(), train.end(), comp);

        /*for(int i = 0; i < 2*n; i++){
            cout << train[i][0] << " " << train[i][1] << endl;
        }*/

        int count = 0;
        int ans = 0;

        for(int i = 0; i < 2*n; i++){
            if(train[i][1] == 1) count++;
            else count--;
            ans = max(ans, count);
        }

        cout << ans << endl;
    }
    return 0;
}
