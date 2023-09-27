#include<bits/stdc++.h>
using namespace std;
    int n, m, ans, temp1, temp2, temp3;
    int h[1510], w[1510];
    int cnth[1510000], cntw[1510000];
int main(){

    while(true){

        ans = 0;
         memset(cnth, 0, sizeof(cnth));
         memset(cntw, 0, sizeof(cntw));

        cin >> n >> m;
        if(!n && !m)
            break;
        for(int i = 0; i < n; i++){
            scanf("%d", h + i);
        }
        for(int i = 0; i < m; i++){
            scanf("%d", w + i);
        }
        temp1 = 0;
        for(int i = 0; i < n; i++){
            temp1 += h[i];
            cnth[temp1]++;
            temp2 = temp1;
            for(int j = i + 1; j < n; j++){
                temp2 += h[j] - h[j - i - 1];
                cnth[temp2]++;
            }
        }
        temp3 = 0;
        for(int i = 0; i < m; i++){
            temp3 += w[i];
            cntw[temp3]++;
            temp2 = temp3;
            for(int j = i + 1; j < m; j++){
                temp2 += w[j] - w[j - i - 1];
                cntw[temp2]++;
            }
        }
        for(int i = 1; i <= min(temp1, temp3); i++){
            ans += cnth[i] * cntw[i];
        }
        cout << ans << endl;
    }
}
