#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int total_area = 0;

    string geo; cin >> geo;
    stack<int> s;
    stack<pair<int, int>> s2;

    for(int i = 0; i < geo.size(); i++){

        if(geo.at(i) == '\\'){
            s.push(i);

        }else if(geo.at(i) == '/'){
            if(s.size() > 0){ // 初期標高よりも低い場合
                int left = s.top(); s.pop(); // 上り/に対応する下り\の座標
                int area = i - left; // right/とleft\に挟まれた面積
                
                // 水たまりの総面積
                total_area += area;

                // 水たまりの統合
                while(s2.size() > 0 && s2.top().first > left){
                    area += s2.top().second;
                    s2.pop();
                }
                s2.push(make_pair(left, area));
            }
        }
   }
    cout << total_area << endl;


    int size = s2.size();
    vector<int> ans;

    for(int i = 0; i < size; i++){
        ans.push_back(s2.top().second);
        s2.pop();
    }
    reverse(ans.begin(), ans.end());

    cout << size;
    for(int i = 0; i < ans.size(); i++){
        cout << " ";
        cout << ans.at(i);
    }
    cout << endl;
    return 0;
}

