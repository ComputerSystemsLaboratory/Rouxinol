#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n1, n2;
    while(cin >> m >> n1 >> n2, m || n1 || n2){
	int P[201];
	for(int i = 0; i < m; i++) cin >> P[i];
	int ans = n1;
	for(int i = n1; i <= n2; i++){
	    if(P[ans-1]-P[ans] <= P[i-1]-P[i]) ans = i;
	}
	cout << ans << endl;
    }
    
    return 0;
}