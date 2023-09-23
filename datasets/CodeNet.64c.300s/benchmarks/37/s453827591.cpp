#include <iostream>
using namespace std;

int main() {
	int a,b,i,j,c=0,ans=0,cnt=0;
	while(1){
		cin >> a;
		if(a==0) break;
		for(i=1;i<a;i++){
			for(j=i;;j++){
				if(c<a){
					c+=j;
					cnt++;
				}
				if(c==a && cnt!=0){
					ans++;
					c=0;
					cnt=0;
					break;
				}else if(c>a){
					c=0;
					cnt =0;
					break;
				}
			}
		}
		cout <<ans <<endl;
		c=0;
		cnt=0;
		ans=0;
		
	}
	return 0;
}