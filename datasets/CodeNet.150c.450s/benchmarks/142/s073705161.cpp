#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin >> n >> k;
	int arr[(int)2e5 + 100];
	for(int i = 1;i <= n;i++)cin >> arr[i];
	for(int i = k + 1;i <= n;i++)if(arr[i] > arr[i - k])cout << "Yes" << endl; else cout << "No" << endl;
	return 0;
}