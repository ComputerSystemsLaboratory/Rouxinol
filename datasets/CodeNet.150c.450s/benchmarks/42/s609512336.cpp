#include <queue>
#include <utility>
#include <string>
#include <iostream>

using namespace std;

int main(){
    pair<string, int> schedule;
    queue<pair <string, int> > Q;
    int total = 0;
    int n,q;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        string s;
        int ms;
        cin >> s >> ms;
        schedule = make_pair(s, ms);
        Q.push(schedule);
    }
    while(!Q.empty()){
        if(Q.front().second<=q){
            total += Q.front().second;
            cout << Q.front().first << " " << total << endl;
            Q.pop();
        }
        else{
            total += q;
            schedule = make_pair(Q.front().first,Q.front().second-q);
            Q.pop();
            Q.push(schedule);
        }
    }
}