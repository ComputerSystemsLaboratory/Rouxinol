#include <iostream>
#include <stack>
#include <vector>
using namespace std;
using P = pair<int, int>;

int main(){
    stack<int> a;
    stack<P> b;
    string g;
    getline(cin, g);

    int sum = 0;
    for(int i = 0; i < g.size(); i++){
        if(g[i] == '\\') a.push(i);
        else if(g[i] == '/' && !a.empty()){
            int a_left = a.top(); a.pop();
            int s = i - a_left;
            sum += s;
            while(!b.empty() && b.top().first > a_left){
                s += b.top().second; b.pop();
            }
            b.push(make_pair(a_left, s));
        }
    }
    cout << sum << endl << b.size();

    vector<int> o;
    while(!b.empty()){
        o.push_back(b.top().second);
        b.pop();
    }
    for(int i = o.size() - 1; i >= 0; i--) cout << ' ' << o[i];
    cout << endl;
    return 0;
}
