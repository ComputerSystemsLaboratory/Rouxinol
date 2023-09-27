#include <iostream>
#include <queue>

using namespace std;

int main(){
        int n,q;
        queue<pair<string,int>> que;
        cin >> n >> q;
        for(int i=0;i<n;i++){
                string name;
                int time;
                cin >> name >> time;
                que.push(make_pair(name,time));
        }
        long long int cur_time = 0;
        while(!que.empty()){
                pair<string,int> x = que.front();
                que.pop();
                if(x.second > q){
                        que.push(make_pair(x.first,x.second-q));
                        cur_time += q;
                } else {
                        cur_time += x.second;
                        cout << x.first << " " << cur_time << endl;
                }
        }
        return 0;
}