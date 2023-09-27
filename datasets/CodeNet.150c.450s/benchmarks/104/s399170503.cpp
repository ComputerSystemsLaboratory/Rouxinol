#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

class amida{
private:
	int wnum, w[30], n, a[30], b[30];
public:
	amida(int c, int d, int e[], int f[]);
	void set_w();
	void swap_amida();
	void disp();
};

amida::amida(int c, int d, int e[], int f[]){
	wnum = c;
	n = d;
	for(int i = 0; i < n; i++){
		a[i] = e[i];
		b[i] = f[i];
	}
}

void amida::set_w(){
	for(int i = 0; i < wnum; i++){
		w[i] = i;
	}
}

void amida::swap_amida(){
	for(int i = 0; i < n; i++){
		swap(w[(a[i] - 1)], w[(b[i] - 1)]);
	}
}

void amida::disp(){
	for(int i = 0; i < wnum; i++){
		cout <<(w[i] + 1)<<endl;
	}
}

int main(){
	int c, d, e[30], f[30];
	cin >>c;
	cin >>d;
	for(int i = 0; i < d; i++){
		scanf("%d,%d", &e[i], &f[i]);
	}
	
	amida hoge(c, d, e, f);
	hoge.set_w();
	hoge.swap_amida();
	hoge.disp();
	
	return 0;
}