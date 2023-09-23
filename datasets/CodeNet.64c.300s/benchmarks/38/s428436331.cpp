#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <iostream>
#include <string.h>
#include <map>
#include <set>
#include <functional>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
	ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--){
        bool ok = true;
        int l, r;
        l = r = -1;
        for(int i=0; i<10; i++){
            int b;
            cin >> b;
            if(l >= r && b > l)
                l = b;
            else if(b > r)
                r = b;
            else
                ok = false;
            //cout << l << " " << r << endl;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    
	return 0;
}