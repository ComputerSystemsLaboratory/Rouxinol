#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int loop=0;loop<n;loop++){
		int y,m,d;
		cin >> y >> m >> d;
		
		int ans = 0;
		
		if(y%3 == 0){
			ans += 21 - d;
			m++;
			while(m<11){
				ans+=20;
				m++;
			}
		}else{
			if(m%2==0){
				ans += 20 - d;
				m++;
			}else{
				ans += 21 - d;
				m++;
			}
			while(m<11){
				if(m%2==0){
					ans+=19;
				}else{
					ans+=20;
				}
				m++;
			}
		}

		y++;

		int ty = 20*10;
		int ny = 19*5+20*5;

		for(;y<1000;y++){
			if(y%3==0){
				ans += ty;
			}else{
				ans += ny;
			}
		}
		
		cout << ans << endl;
	}
}