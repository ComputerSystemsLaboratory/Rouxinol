#include<cstdio>

int main(){
	int n, b, c, t, f;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		b = c = f = 0;
		for(int j = 0; j < 10; j++){
			scanf("%d", &t);
			if(b < t){
				b = t;
			}else{
				if(c < t){
					c = t;
					if(b < c){
						t = b;
						b = c;
						c = t;
					}
				}else{
					f = 1;
				}
			}
		}

		if(f){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}