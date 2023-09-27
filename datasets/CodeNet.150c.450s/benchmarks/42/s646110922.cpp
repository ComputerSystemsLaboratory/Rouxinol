#include <string>
#include <queue>
#include <utility>
#include <iostream>
using namespace std;

int main(){
    int n,q;
    pair<string,int> pros[100000+10];
    cin >> n >> q;
    queue<pair<string,int> > Q;
    for(int i=0;i<n;i++){
        cin >> pros[i].first >> pros[i].second;
        Q.push(pros[i]);
    }
    int time=0,mul=1;
    while(!Q.empty()){
        pair<string,int> calc = Q.front();
        Q.pop();
        if(calc.second<=q){
            time += calc.second;
            cout << calc.first << ' ' << time << endl;
        }
        else{
            time += q;
            calc.second -= q;
            Q.push(calc);
        }
    }
    
}