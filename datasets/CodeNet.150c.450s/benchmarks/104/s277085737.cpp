#include<utility>
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

class Amidakuji {
public:
private:
	int w;	// 縦線の本数
	int n;	// 横棒の本数
	int an_list[30];
	int bn_list[30];
public:
	void inputWN(int ww, int nn);
	void inputList();
	int* calc();
private:
	int a(int n);
	int b(int n);
};

int main() {
	Amidakuji amidakuji;
	int w, n;
	cin >> w >> n;
	int* status = new int[w];
	
	amidakuji.inputWN(w, n);
	amidakuji.inputList();
	
	status = amidakuji.calc();
	
	for(int i = 0; i < w; ++i) {
		cout << status[i] << endl;
	}
}


void Amidakuji::inputWN(int ww, int nn) {
	w = ww;
	n = nn;
}

void Amidakuji::inputList() {
	int an, bn;
	for(int i = 0; i < n; ++i) {
		scanf("%d,%d", &an, &bn);
		
		an_list[i] = an;
		bn_list[i] = bn;
	}
}

int* Amidakuji::calc() {
	int* status = new int[w];
	for(int i = 0; i < w; ++i) {
		status[i] = i + 1;
	}
	
	for(int i = 0; i < n; ++i) {
		int an = a(i)-1;
		int bn = b(i)-1;
		
		swap(status[an], status[bn]);
	}
	
	return status;
}

int Amidakuji::a(int n) {
	return an_list[n];
}

int Amidakuji::b(int n) {
	return bn_list[n];
}