#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; (i) < (n); (i)++)
using namespace std;

int main()
{
    int n, k, index;
    long a[100005];
    long suma[100005];
    long ans[10];
    index = 0;
    REP(i, 10){
        cin >> n >> k;
        if(n == 0 && k == 0)
            break;
        REP(j, n)
            cin >> a[j];
        suma[0] = 0;
        REP(j, n)
            suma[j+1] = suma[j] + a[j];
        REP(j, n-k+1){
            if(j==0)
                ans[index] = suma[j+k] - suma[j];
            else{
                if(ans[index] < (suma[j+k] - suma[j]))
                    ans[index] = suma[j+k] - suma[j];
            }
        }
        index++;
    }
    REP(i, index)
        cout << ans[i] << endl;

    
    

    return 0;
}


