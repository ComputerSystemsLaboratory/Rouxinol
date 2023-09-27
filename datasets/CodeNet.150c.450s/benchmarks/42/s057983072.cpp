#include <bits/stdc++.h>

using namespace std;

int main(){

        typedef pair<string, int> p;
        queue<p> que;

        string name;
        int n, q, time, total = 0;

        cin >> n >> q;

        for(int i = 0; i < n; ++i){
                cin >> name >> time;
                que.push(p(name, time));
        }

        while(!que.empty()){

                p process = que.front(); que.pop();
                string pname = process.first;
                int ptime = process.second;

                if(ptime > q){

                        total += q;
                        ptime -= q;
                        que.push(p(pname, ptime));

                } else {

                        total += ptime;
                        cout << pname << " " << total << endl;

                }
        }
}