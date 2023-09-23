#include<iostream>
#include<cstdio>
using namespace std;

int n;
int y,m,d;
int dd[11]={0,20,19,20,19,20,19,20,19,20,19};

int main(void){
	cin >> n;
	for(int i=0;i<n;i++){
		int ans=0;
		cin >> y >> m >> d;
		while(y!=1000 || m!=1 || d!=1){
			if(y!=999){
				if(y%3==0){
					while(m!=11 || d!=1){
						if(21==d)m++,d=1;
						if(m==11 && d==1)break;
						d++,ans++;
					}
					m=1;
					y++;
				}else{
					while(m!=11 || d!=1){
						if(dd[m]==d-1)m++,d=1;
						if(m==11 && d==1)break;
						d++,ans++;
					}
					m=1;
					y++;
				}
			}else{
				while(m!=11 || d!=1){
						if(21==d)m++,d=1;
						if(m==11 && d==1)break;
						else d++,ans++;
					}
				y=1000,m=1,d=1;
			}
		}
		cout << ans << endl;
	}
    return 0;
}