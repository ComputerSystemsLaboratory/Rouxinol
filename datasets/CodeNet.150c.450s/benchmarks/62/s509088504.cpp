#include<cstdio>

int main(){
	int a, b, c, d, e, f, g, h, i;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		d = b, e = a;
	}else{
		d = a, e = b;
	}
	if(e>c){
		f = c, g = e;
	}else{
		f = e, g = c;
	}
	if(d>f){
		h = f, i = d;
	}else{
		h = d, i = f;
	}
	printf("%d %d %d\n", h, i, g);

	return 0;
}