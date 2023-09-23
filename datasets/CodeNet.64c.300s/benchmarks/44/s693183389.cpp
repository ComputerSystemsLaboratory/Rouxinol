#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_N = 101;
const int INF   = 9999999;
int n;
int w[MAX_N][MAX_N];
bool used[MAX_N];

int main()
{
    while(cin >> n && n) {
        memset(used, false, sizeof(used));
        for(int i = 0; i < MAX_N; i++)
            for(int j = 0; j < MAX_N; j++)
                w[i][j] = INF;

        int a,b,c;
        for(int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            used[a] = used[b] = true;
            w[a][b] = w[b][a] = c;
        }

        for(int i = 0; i < MAX_N; i++)
            w[i][i] = 0;
        
        for(int k = 0; k < MAX_N; k++) {
            for(int i = 0; i < MAX_N; i++) {
                for(int j = 0; j < MAX_N; j++) {
                    if(used[i] && used[j] && used[k]) 
                        w[i][j] = min(w[i][j], w[i][k] + w[k][j]);
                }
            }
        }

        
        int idx, min = INF;
        
        for(int i = 0; i < MAX_N; i++) {
            if(!used[i]) continue;
            
            int tmp = 0;
            for(int j = 0; j < MAX_N; j++) 
                if(used[i] && used[j])
                    tmp += w[i][j];
            
            if(tmp < min) {
                min = tmp;
                idx = i;
            }
        }

        cout << idx << " " << min << endl;
    }
}