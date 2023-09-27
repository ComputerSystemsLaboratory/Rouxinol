#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){ int n,m,div;
			int t[100];
			int h[100];
		while(1){
			cin >> n >>m ;
			if ((n == 0) && (m==0) ) break;
			int st=0,sh=0;
			for (int i = 0;i <n ;i++) {
				cin >>t[i];
				st += t[i];
			}
			for (int j = 0;j <m ;j++) {
				cin >>h[j];
				sh += h[j];
			}
			if ((st+sh)%2) cout << -1 <<endl;
			else {	int frag = 0;
					div =st- (st+sh)/2;
						for(int i = 0;i < n; i++){
							for(int j=0 ;j< m; j++){
								if (t[i]-h[j] == div){
									cout << t[i] <<" "<< h[j] <<endl;
									frag =1;
									break;
								}
								
							}
						if (frag) break;
						}
						if (frag == 0)cout <<-1 <<endl;
			}
		}
		return 0;
}