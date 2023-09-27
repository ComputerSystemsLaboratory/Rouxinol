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
    int n, m;
    int a[10000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int t;
    int cnt = 0;
    for(int i = 0; i < m; i++){
        cin >> t;
        for(int j = 0; j < n; j++){
            if(t == a[j]){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}