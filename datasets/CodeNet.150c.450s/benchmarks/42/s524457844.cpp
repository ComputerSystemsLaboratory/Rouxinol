#include <bits/stdc++.h>
using namespace std;
queue< pair<string,int> > Q;
pair<string,int> P;

int main()
{
    int n , q , time;
    string name;
    cin >> n >> q;
    for(int i = 0;i < n;i++){
        cin >> name >> time;
        P = make_pair(name,time);
        Q.push(P);
    }
    int sum = 0;
    while(!Q.empty()){
        P = Q.front();
        time = P.second;
        if(time > q){
                P.second -= q;
                sum += q;
                Q.push(P);
                Q.pop();
        }else{
            sum += time;
            cout << P.first << " " << sum << endl;
            Q.pop();
        }
    }
    return 0;
}

