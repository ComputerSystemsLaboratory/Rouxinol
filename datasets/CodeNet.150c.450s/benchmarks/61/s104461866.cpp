#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    int n, a, b, c, x;
    while(1){
        cin >> n >> a >> b >> c >> x;
        if(n == 0) break;
        int cnt = 0;
        int y[100];
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        for(int i = 0; i < n; i++){
            while(x != y[i]){
                cnt++;
                x = (a * x + b) % c;
                if(cnt > 10000) break;
            }
            if(cnt > 10000){
                cnt = -1;
                break;
            }
            if(i != n - 1) cnt++;
            x = (a * x + b) % c;
        }
        cout << cnt << endl;
    }
    return 0;
}