#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> state; //this stroes the index of '\\'
    stack<pair<int, int> >lake; //this stroes the info about pits
    int sum=0, s=0;
    char c;
    for(int i=0;cin >> c; i++){ // i is the index in the input
        if(c=='\\'){
            state.push(i); //storing the index of '\\'
        }else if(c=='/' && state.size()){ //state.size() makes sure that the useless starting bit is not counted 
            s = i-state.top(); // storing the currently added area
            sum += s; // storing the total area
            while(lake.size() && lake.top().first > state.top()){ //combining the small pits
                s += lake.top().second;
                lake.pop();
            }
            lake.push(make_pair(state.top(), s));
            state.pop();
        }
        
    }
    stack<int> ans; //using this to revert the lake stack
    while(lake.size()){
        ans.push(lake.top().second);
        lake.pop();
    }
    
    //printing the output
    cout << sum << endl;
    cout << ans.size();
    while(ans.size()){
        cout << " " << ans.top();
        ans.pop();
    }
    cout << endl;
    
    return 0;
}
