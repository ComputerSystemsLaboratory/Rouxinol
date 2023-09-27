#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
#include <map>
#include <set>
const long long mod = 1e9 + 7;
const int INF = 1 << 20;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int f = 0,l = 0;
        for(int j = 0; j < 2; j++){
            string s; cin >> s;
            for(int k = 0; k < s.size(); k++){
                int tmp = 1;
                if(s[k] > '0' && s[k] <= '9'){
                    tmp = s[k] - '0';
                    if(s[k+1] == 'm' && k+1 < s.size()) tmp *= 1000;
                    if(s[k+1] == 'c' && k+1 < s.size()) tmp *= 100;
                    if(s[k+1] == 'x' && k+1 < s.size()) tmp *= 10;
                    if(s[k+1] == 'i' && k+1 < s.size()) tmp *= 1;
                    if(j==0) {f += tmp;}
                    else {l += tmp;}
                    k++;
                }else{
                    if(s[k] == 'm') tmp *= 1000;
                    if(s[k] == 'c') tmp *= 100;
                    if(s[k] == 'x') tmp *= 10;
                    if(s[k] == 'i') tmp *= 1;
                    if(j==0) {f += tmp;}
                    else {l += tmp;}
                }
            }
        }
        int sum = l+f;
        string ans;
        if(sum >= 2000){
            ans += ('0' + (sum / 1000));
            ans += 'm';
            sum %= 1000;
        }else if(sum >= 1000){
            ans += 'm';
            sum %= 1000;
        }
        if(sum >= 200){
            ans += ('0' + (sum/100));
            ans += 'c';
            sum %= 100;
        }else if(sum >= 100){
            ans += 'c';
            sum %= 100;
        }
        if(sum >= 20){
            ans += ('0' + (sum/10));
            ans += 'x';
            sum %= 10;
        }else if(sum >= 10){
            ans +=  'x';
            sum %= 10;
        }
        if(sum >= 2){
            ans += ('0'+sum);
            ans += 'i';
        }else if(sum >= 1){
            ans += 'i';
        }
        cout << ans << endl;
    }
}
