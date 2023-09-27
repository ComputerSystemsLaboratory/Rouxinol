#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	while(1){
        int n,k;
        int sum = 0,mx = 0;
        int ans[100000] = {0};
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        for(int i = 0; i < n; i++) cin >> ans[i];
        for(int i = 0; i < k; i++){
            sum += ans[i];
        }
        mx = sum;
        for(int i = k; i < n; i++){
            sum += ans[i];
            sum -= ans[i-k];
            mx = max(mx,sum);
        }
        cout << mx << endl;
	}
	return 0;
}