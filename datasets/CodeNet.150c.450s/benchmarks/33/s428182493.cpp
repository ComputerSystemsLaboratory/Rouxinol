#include <cstdio>
using namespace std;

int main(){
	int x, y, s;
	int a;
	int a2, b2, s2, res;
	int lb, ub, mid;
	
	while(true){
		scanf("%d%d%d", &x, &y, &s);
		if(x == 0 && y == 0 && s == 0) break;
		
		res = 0;
		for(a = 1; a < s; a++){
			ub = s; lb = 0;
			while(ub - lb > 1){
				mid = (ub + lb) / 2;
				if(mid * (100 + x) / 100 > a){
					ub = mid;
				}
				else{
					lb = mid;
				}
			}
			if(lb * (100 + x) / 100 == a){
				a2 = lb;
				ub = s; lb = 0;
				while(ub - lb > 1){
					mid = (ub + lb) / 2;
					if(mid * (100 + x) / 100 > s - a){
						ub = mid;
					}
					else{
						lb = mid;
					}
				}
				if(lb * (100 + x) / 100 == s - a){
					b2 = lb;
					s2 = (a2 * (100 + y) / 100) + (b2 * (100 + y) / 100);
					if(s2 > res){
						res = s2;
					}
				}
			}
		}
		
		printf("%d\n", res);
	}
	return 0;
}