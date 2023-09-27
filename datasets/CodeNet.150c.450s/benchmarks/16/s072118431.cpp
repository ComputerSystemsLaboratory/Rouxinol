#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    char c;
    int sum;
    stack<pair<int, int> > w1;
    stack<int> w2;
    
    sum = 0;
    for(int i = 0; cin >> c; i++){
        if(c == '\\'){
            w2.push(i);
        }
        else if(c == '/' && w2.size() > 0){
            int j = w2.top();
            w2.pop();
            sum += i - j;
            int a = i - j;
            while(w1.size() > 0 && w1.top().first > j){
                a += w1.top().second;
                w1.pop();
            }
            
            w1.push(make_pair(j, a));
        }
    }
    
    int a = w1.size();
    stack<int> ans;
    while(w1.size() > 0){
        ans.push(w1.top().second);
        w1.pop();
    }
    
    int num = ans.size();
    cout << sum << endl << num;
    for(int i = 0; i < num; i++){
        cout << " " << ans.top();
        ans.pop();
    }
    cout << endl;
    
    return 0;
}
