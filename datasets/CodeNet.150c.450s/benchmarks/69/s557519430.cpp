#include <cstdio>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	
	while(N--){
		int a = 0, b = 0, t;
		bool flag = true;
		for(int i = 0; i < 10; i++){
			scanf("%d", &t);
			if(a < t){
				if(b < t){
					(a > b ? a : b) = t;
				}
				else{
					a = t;
				}
			}
			else{
				if(b < t){
					b = t;
				}
				else{
					flag = false;
				}
			}
		}
		printf(flag ? "YES\n" : "NO\n");
	}
	return 0;
}