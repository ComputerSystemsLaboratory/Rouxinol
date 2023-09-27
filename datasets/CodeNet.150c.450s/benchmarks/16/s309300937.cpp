#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    char s;
    int total_sq = 0;
    stack<int> s1;
    stack<pair<int, int>> s2;
    for (int i = 0; cin>>s ; i++){
        if(s == '\\'){
            s1.push(i);
        }
        else if(s == '/' && s1.size() > 0){
            int j = s1.top();
            int a = i - j;
            s1.pop();
            while(!s2.empty() && s2.top().first > j){
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, a));
        }
    }
    vector<int> ans;
    int total = 0;
    int kk = s2.size();
    while(s2.size() > 0){
        total += s2.top().second;
        ans.push_back(s2.top().second);
        s2.pop();}
        cout << total << endl;
        cout << kk;
        if (kk == 0)
            cout << endl;
        else
        {
            cout << ' ';
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                if (i == 0)
                {
                    cout << ans[i] << endl;
                }
                else
                {
                    cout << ans[i] << ' ';
                }
            }
        }
    }
