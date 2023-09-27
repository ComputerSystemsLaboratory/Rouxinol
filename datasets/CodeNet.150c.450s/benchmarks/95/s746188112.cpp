#include <iostream>
#include <string>

using namespace std;

int main() {
	int i,n,ans=0,l=0,r=0,b=0;
	string a;
	while(1){
		cin >> n;
		if(n==0) break;
		for(i=0;i<n;i++){
			cin >> a;
			if(a=="lu"){
				l=1;
			}else if(a=="ru"){
				r=1;
			}else if(a=="ld"){
				l=0;
			}else if(a=="rd"){
				r=0;
			}
			
			if((l==1 && r==1) && b==0) {
				ans++;
				b=1;
			}
			if((l==0 && r==0) && b==1){
				ans++;
				b=0;
			}
			
			
		}
		
		
		cout << ans << endl;
		ans=0;
		b=0;
		l=0;r=0;
		
	}
	
	return 0;
}