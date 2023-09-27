#include<iostream>
#include<algorithm>

using namespace std;
int a[1080], b[1080];
int n, m;
int main(){
	while(cin >> n >> m, n | m){
		int asum = 0, bsum = 0;
		for(int i = 0;i < n;i++)cin >> a[i], asum += a[i];
		for(int i = 0;i < m;i++)cin >> b[i], bsum += b[i];
		int aans = -1, bans;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(asum - bsum == 2 * (a[i] - b[j])){
					if(aans == -1 || aans + bans > a[i] + b[j]){
						aans = a[i];
						bans = b[j];
					}
				}
			}
		}
		if(aans == -1)
			cout << -1 << endl;
		else
			cout << aans << " "<< bans << endl;	
	}
}