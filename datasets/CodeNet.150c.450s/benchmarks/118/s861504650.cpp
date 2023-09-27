#include <cstdio>

int n, y, m, d, ans;

void next(int &y, int &m, int &d){
	if(m%2 || y%3 == 0 ){
		if(d == 20){
			m ++;
			d = 1;
		}else d++;
	}else{
		if(d == 19){
			m ++;
			d = 1;
		}else d++;
	}
	if( m==11 ){
		y++;
		m = 1;
	}
}

int main(){
	scanf("%d", &n);
	while(n-->0){
		ans = 0;
		scanf("%d %d %d", &y, &m, &d);
		while(y!=1000 || m!=1 || d!=1){
			ans ++;
			next(y, m, d);
		}
		printf("%d\n", ans);
	}
	return 0;
}