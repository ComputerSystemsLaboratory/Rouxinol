#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef pair<P, int> PP;
int main(){
    stack<int> st, ans;
    stack<PP> ps;
    string s;
    int sum = 0, lake = 0, k = 0, depth = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '\\'){
            st.push(i);
            depth++;
        }
        if(s[i] == '/'){
            if(st.empty()){
                depth--;
                continue;
            }
            int temp = st.top();
            st.pop();
            ps.push(make_pair(make_pair(i, temp), depth));
            sum += i - temp;
            depth--;
        }
    }
    PP p;
    if(!ps.empty()){
        p = ps.top();
        ps.pop();
        if(ps.empty()){
            ans.push(p.first.first - p.first.second);
        }
    }
    while(!ps.empty()){  
        lake = p.first.first - p.first.second;    
        PP p2;
        p2 = ps.top();
        ps.pop();
        while(1){
            if(p.first.second < p2.first.second && p.second < p2.second){
                lake += p2.first.first - p2.first.second;
            }
            else if(ps.empty()){
                ans.push(lake);
                ans.push(p2.first.first - p2.first.second);
                break;
            }
            else{
                ans.push(lake);
                p = p2;
                break;
            }
            if(ps.empty()){
                ans.push(lake);
                break;
            }
            p2 = ps.top();
            ps.pop();
        }
    }
  
    cout  << sum << endl << ans.size();
    while(!ans.empty()){
        cout << " " << ans.top();
        ans.pop();
    }
    cout << endl;
}

