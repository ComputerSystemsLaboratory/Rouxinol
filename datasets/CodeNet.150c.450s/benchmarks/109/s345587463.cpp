#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

int str2time(string time_str) {
    int time_int = 0;
    time_int += stoi(time_str.substr(0, 2))*60*60;
    time_int += stoi(time_str.substr(3, 2))*60;
    time_int += stoi(time_str.substr(6, 2));
    return time_int;
}

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N==0) break;

        int time[86401] = {};
        string leave, arrive;
        int leave_time, arrive_time;
        rep(i, N) {
            cin >> leave >> arrive;
            leave_time = str2time(leave);
            arrive_time = str2time(arrive);

            time[leave_time]++;
            if (leave_time!=arrive_time) time[arrive_time]--;
            else time[arrive_time+1]--;
        }

        int num_train[86401] = {}, ans=0;
        num_train[0] = time[0];
        for (int i=1; i<86401; i++) {
            num_train[i] = num_train[i-1] + time[i];
            ans = max(ans, num_train[i]);
        }

        cout << ans << endl;
    }


    return 0;
}


