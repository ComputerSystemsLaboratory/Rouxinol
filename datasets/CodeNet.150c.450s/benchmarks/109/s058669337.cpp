#include <iostream>
#include <vector>

using namespace std;

const int seconds = 60;
const int minutes = 60;
const int hours = 24;
const int day = seconds*minutes*hours;

vector<string> split(string s, char delimeter){
    string t = "";
    vector<string> ret;
    for(int i=0; i<s.length(); i++){
        if(s[i] != delimeter){
            t += s[i];
        }else{
            ret.push_back(t);
            t = "";
        } 
    }
    if (t != "")ret.push_back(t);
    return ret;
}

int intTime(string stime){
    vector<string> time = split(stime, ':');

    int h = ((time[0][0]-'0')*10 + (time[0][1]-'0'))*minutes*seconds;
    int m = ((time[1][0]-'0')*10 + (time[1][1]-'0'))*seconds;
    int s = ((time[2][0]-'0')*10 + (time[2][1]-'0'));

    return h+m+s;
}

int main(){
    vector<int> ans;

    while(true){
        int n;
        cin >> n;

        if(n == 0) break;

        int sum[day+1];
        fill(sum, sum+day, 0);

        string a, b;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            sum[intTime(a)]++;
            sum[intTime(b)]--;
        }

        int ret = sum[0];
        for(int i=0; i<day-1; i++){
            sum[i+1] += sum[i];
            if(ret < sum[i+1]) ret = sum[i+1];
        }
        ans.push_back(ret);
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}
