#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int N;
    cin >> N;
    set<string> ids;
    for(int i=0; i<N; i++){
        string id;
        cin >> id;
        ids.insert(id);
    }
    
    int M;
    bool locked = true;
    cin >> M;
    while(M--){
        string id;
        cin >> id;
        if(ids.count(id)){
            if(locked)
                cout << "Opened by " << id << endl;
            else
                cout << "Closed by " << id << endl;
            locked ^= true;
        }else{
            cout << "Unknown " << id << endl;
        }
    }
    
    return 0;
}