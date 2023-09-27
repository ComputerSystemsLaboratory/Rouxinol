#include<algorithm>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>
using namespace std;

typedef long long lint;

int main(){
    while(true){
        int n, p;
        cin >> n >> p;
        if(n == 0 && p == 0){
            break;
        }
        vector<int> c(n, 0);
        int i = 0, ans, last;
        while(true){
            i = i % n;
            if(p > 0){
                p--;
                c[i]++;
                last = i;
            }else if(c[i] > 0){
                if(i == last){
                    ans = i;
                    break;
                }
                p = c[i];
                c[i] = 0;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
