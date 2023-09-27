#include <iostream>
#include <algorithm>
#define USER_SIZE 100000
#define NIL -1

using namespace std;

int group[USER_SIZE];

int update(int num){
    if(num == group[num]){ return num; }
    else{ return group[num] = update(group[num]); }
}

int main(){
    int n, m, s, t, q;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        group[i] = i;
    }
    for(int i = 0; i < m; i++){
        cin >> s >> t;
        int tmp1 = update(s);
        int tmp2 = update(t);
        group[max(tmp1, tmp2)] = min(tmp1, tmp2);
    }

    cin >> q;
    while(q--){
        cin >> s >> t;
        if(update(s) == update(t)){ cout << "yes" << endl; }
        else{ cout << "no" << endl; }
    }

    return 0;
}
