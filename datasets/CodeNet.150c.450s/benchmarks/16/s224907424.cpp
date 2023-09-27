#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void printVecRv(vector<int> &v){
    vector<int>::reverse_iterator ite = v.rbegin();
    while(ite != v.rend()){
        cout << " " << *ite;
        ite++;
    }
    cout << endl;
}

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    stack<int> dist;
    stack<pair<int, int> > pools;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == '\\'){
            dist.push(i);
        }else if(s.at(i) == '/' && dist.size() > 0){
            int j = dist.top(); dist.pop();
            int d = i - j;
            sum += d;
            while(pools.size() > 0 && pools.top().first > j){
                d += pools.top().second; pools.pop();
            }
            pools.push(make_pair(j, d));
        }
    }
    cout << sum << endl << pools.size();
    vector<int> v;
    while(pools.size() > 0){
        v.push_back(pools.top().second);
        pools.pop();
    }
    printVecRv(v);
    return 0;
}