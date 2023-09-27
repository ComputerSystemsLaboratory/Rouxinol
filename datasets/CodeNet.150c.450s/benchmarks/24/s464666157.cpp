#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    
    while (scanf("%d %d", &n, &m) && n){
        pair<int, int> P[100000];
        int ans = 0;
        for (int i = 0; i < n; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            ans += a * b;
            P[i] = make_pair(-b, a);
        }
        
        sort(P, P + n);
        
        for (int i = 0; i < n; i++){
            if (P[i].second <= m){
                ans += P[i].first * P[i].second;
                m -= P[i].second;
            }
            else {
                ans += P[i].first * m;
                break;
            }
        }
        
        printf("%d\n", ans);
    }
    
    return (0);
}