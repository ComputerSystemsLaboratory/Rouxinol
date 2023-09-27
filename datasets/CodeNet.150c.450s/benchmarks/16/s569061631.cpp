#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, m) for (int i = (int)(n); i <= (int)(m); i++)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define collect(arr, size) rep(i,size) cin >> arr[i];

int main(){
    string view;
    cin >> view;
    vector<int> area;
    
    stack<int> down;
    stack<pair<int, int>> puddle;
    int total = 0;
    rep(i, view.length()){
        if(view[i]=='\\'){
            down.push(i);
        }else if(view[i]=='/' && !down.empty()){
            total += i - down.top();
            int nowarea = i - down.top();
            if(!puddle.empty() && !down.empty()){
                while(puddle.top().first > down.top()){
                    nowarea += puddle.top().second;
                    puddle.pop();
                    if(puddle.empty() || down.empty()) break;
                }
            }
            puddle.push(make_pair(down.top(), nowarea));
            down.pop();
        }
    }
    
    cout << total << endl;
    cout << puddle.size();
    
    vector<int> temp;
    while(!puddle.empty()){
        temp.push_back(puddle.top().second);
        puddle.pop();
    }
    reverse(all(temp));
    rep(i, temp.size()) cout << " " << temp[i];
    cout << endl;
    return 0;
}
