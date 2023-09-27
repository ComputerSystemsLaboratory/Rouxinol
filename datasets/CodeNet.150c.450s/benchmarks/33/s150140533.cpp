#include <bits/stdc++.h>
using namespace std;

int x, y, s;

int main(){
	while(scanf("%d%d%d",&x,&y,&s),x||y||s){
		int a,b,A,B;
		int ans = 0;
		for(a = 1; a <= s-1; a++){
			b = s-a;
			A = a*100/(100+x);
			A -= 10;
			while(true){
				if((A+1)*(100+x)/100 > a) break;
				A++;
			}
			if(A*(100+x)/100 <= a-1) continue;
			B = b*100/(100+x);
			B -= 10;
			while(true){
				if((B+1)*(100+x)/100 > b) break;
				B++;
			}
			if(B*(100+x)/100 <= b-1) continue;
			//cout << a << " " << b << " " << A << " " << B << " " << A*(100+y)/100+B*(100+y)/100 << endl;
			ans = max(ans,A*(100+y)/100+B*(100+y)/100);
		}
		cout << ans << endl;
	}
}