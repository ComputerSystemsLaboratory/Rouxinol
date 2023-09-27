#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int n, q;
    queue<pair<string, int> > que, done;

    cin >> n >> q;
    for(int i=0; i<n; i++){
        string name;
        int time;
        cin >> name >> time;
        que.push(make_pair(name, time));
    }

    int total=0;
    while(!que.empty()){
        auto x=que.front(); que.pop();
        if(x.second > q){
            x.second-=q;
            que.push(x);
            total+=q;
        } else{
            total+=x.second;
            done.push(make_pair(x.first, total));
        }
    }

    while(!done.empty()){
        auto x=done.front(); done.pop();
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}