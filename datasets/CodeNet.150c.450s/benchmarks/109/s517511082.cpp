#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int HourtoMin(string s);

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        int time_s;
        string h_m_s;
        vector<pair<int, int> > trains(20001);
        for(int i = 0; i < 2 * n; i++){
            cin >> h_m_s;
            time_s = HourtoMin(h_m_s);
            if(i % 2 == 0) trains[i] = make_pair(time_s, 1);
            else trains[i] = make_pair(time_s, 0);
            // 到着したときは0、出発したときは1
        }
        sort(trains.begin(), trains.begin() + 2 * n);
        int osaki_now_train = 0, need_train = 0;
        for(int i = 0; i < 2 * n; i++){
            if(trains[i].second == 1){
                if(osaki_now_train == 0) need_train++;
                else osaki_now_train--;
            } else if(trains[i].second == 0) osaki_now_train++;
        }
        cout << need_train << endl;
    }
    return 0;
}

int HourtoMin(string s)
{
    int ans = 0;
    for(int i = 0; i <= 6; i = i + 3){
        ans += ((s[i] - '0') * 10 + s[i + 1] - '0') * (int)pow(60, ((6 - i) / 3));
    }
    return ans;
}