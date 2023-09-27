#include <iostream>
#include <utility>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    stack<int> sDowns;
    int i;
    char input;
    int init;
    int lake;
    int sum = 0;
    stack< pair<int,int> > sPools;
    vector<int> answer;
    
    for(i = 0; cin >> input; i++){
        if(input == '\\') sDowns.push(i);
        if(input == '/' && !sDowns.empty()){
            init = sDowns.top(); sDowns.pop();
            lake = i - init;
            sum += lake;
            while(!sPools.empty() && sPools.top().first > init){
                lake += sPools.top().second; sPools.pop();
            }
            sPools.push(make_pair(init, lake));
        }
        
    }
    
    while(!sPools.empty()){
        answer.push_back(sPools.top().second);
        sPools.pop();
    }
    reverse(answer.begin(), answer.end());
    
    cout << sum << endl;
    cout << answer.size();
    
    for(i = 0; i < answer.size(); i++){
        cout << " " << answer[i];
    }
    
    cout << endl;
    return 0;
}