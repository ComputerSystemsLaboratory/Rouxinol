#include <iostream>
#include <cmath>
#include <cstring>
#include <utility>
using namespace std;

int solve(int x,int p){
	return floor(p*(1+x*0.01));
}

int main() {
	int n;
	int a[6][10];
	memset(a,0,sizeof(a));
	while(cin >> n && n){
		for(int i=0;i<n;i++) for(int j=0;j<5;j++) cin >> a[j][i];
		int sum=0;
		int csum;
		do{
			csum=sum;
			for(int i=0;i<n;i++){
				int current=0;
				int count=0;
				int start;
				for(int j=0;j<6;j++){
					if(current != a[j][i]){
						if(count>=3){
							sum+=count*current;
							for(int k=1;k<=count;k++){
								a[j-k][i]=0;
							}
//							cout << "count:" << count << endl;
//							cout << "current:" << current << endl;
						}
						current = a[j][i];
						count=1;
					} else {
						count++;
					}
				}
			}
/*			for(int i=0;i<n;i++){
				for(int j=0;j<5;j++){
					cout << a[j][i] << " ";
				}
				cout << endl;
			}*/
			for(int j=0;j<5;j++){
				for(int i=n-1;i>0;i--){
					if(a[j][i]==0){
						for(int k=i-1;k>=0;k--){
							if(a[j][k]!=0){
//								cout << j << " swap " << i << " " << k << endl;
								swap(a[j][k],a[j][i]);
								break;
							}
						}
					}
				}
			}
		}while(csum!=sum);
		cout << sum << endl;
	}
	return 0;
}