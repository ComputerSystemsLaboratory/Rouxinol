#include <iostream>
using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m , n || m){
		int data[11] = {0};
		for(int i=0;i<n;i++){
			int a,b;
			cin >> a >> b;
			data[b] += a;
		}
		for(int i=10;i>=0;i--){
			if(data[i] <= m ){
				m -= data[i];
				data[i] = 0;
			}else{
				data[i] -= m;
				m = 0;
			}
		}
		int ans = 0;
		for(int i=0;i<=10;i++)
			ans += i * data[i];
		cout << ans << endl;
	}
}