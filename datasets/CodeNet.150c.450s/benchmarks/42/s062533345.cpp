#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){

    int elaps = 0;
    queue<pair<string,int>> Q;

    int n, q;
    cin >> n >> q;

    string s;
    int c;

    for(int i=0; i<n; ++i){
        cin >> s >> c;
        Q.push(make_pair(s,c));
    }
    while( !Q.empty()){
        s=Q.front().first;
        c=Q.front().second;
        Q.pop();
        int n = min(q,c);
        elaps += n;
        c = c-q;
        if( c>0 ){
            Q.push(make_pair(s,c));
        }else{
            cout << s << ' ' << elaps << endl;
        }
    }


    return 0;
}
