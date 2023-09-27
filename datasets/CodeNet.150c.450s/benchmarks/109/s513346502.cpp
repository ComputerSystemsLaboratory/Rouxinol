#include <bits/stdc++.h>
using namespace std;

const int time_max = 86410;

int imos[time_max];

int time_split(char Tens_Place,char One_Place){
    int return_num;
    string s = {Tens_Place, One_Place};
    stringstream ss;
    ss << s;
    ss >> return_num;
    return return_num;
}

int main() {

    while(1) {

        int n;

        cin >> n;

        if(n==0){
            break;
        }

        for(int i=0; i<time_max; i++){
            imos[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            string start, goal;
            cin >> start >> goal;
            int h, m, s;
            h = time_split(start[0], start[1]);
            m = time_split(start[3], start[4]);
            s = time_split(start[6], start[7]);
            imos[h * 60 * 60 + m * 60 + s]++;
            h = time_split(goal[0], goal[1]);
            m = time_split(goal[3], goal[4]);
            s = time_split(goal[6], goal[7]);
            imos[h * 60 * 60 + m * 60 + s]--;
        }

        for (int i = 1; i < time_max; i++) {
            imos[i] += imos[i - 1];
        }

        int ans = 0;

        for (int i = 0; i < time_max; i++) {
            ans = max(ans, imos[i]);
        }

        cout << ans << endl;

    }

    return 0;
}
