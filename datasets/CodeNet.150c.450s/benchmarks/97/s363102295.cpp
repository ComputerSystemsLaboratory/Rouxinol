#include <iostream>
#include <cstring>
using namespace std;
int max_u,max_d,max_l,max_r;

struct square{
	int ud,lr;
};

int main(){
	square s[210];
	int a,b,n,i;
	while(cin >> n,n){
		max_u = 0;
		max_d = 0;
		max_l = 0;
		max_r = 0;
		s[0].ud = 0;
		s[0].lr = 0;

		for(i=1;i < n;i++){
			cin>>a>>b;

			memcpy(&s[i],&s[a],sizeof(square));
			if(b == 0){
				if(--s[i].lr < max_l) max_l = s[i].lr;
			}
			else if(b == 1){
				if(--s[i].ud < max_d) max_d = s[i].ud;
			}
			else if(b == 2){
		 		if(++s[i].lr > max_r) max_r = s[i].lr;
			}
			else if(++s[i].ud > max_u) max_u = s[i].ud;
		}
	cout << max_r-max_l+1 << " " << max_u-max_d+1 << endl;
	}
	return 0;
}