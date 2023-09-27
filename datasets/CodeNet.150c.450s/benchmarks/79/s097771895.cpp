#include <bits/stdc++.h>

using namespace std;

int cards[55],n;

void init(){
	int i;
	for(i=0; i<n; i++){
		cards[i+1] = (n-i);
	}
}

void shuffle(int p,int c){
	int tmp[55],i;
	for(i=1; i<=n; i++){
		tmp[i] = cards[i];
	}
	for(i=0; i<c; i++){
		cards[i+1] = tmp[p+i];
	}
	for(i=1; i<p; i++){
		cards[c+i] = tmp[i];
	}
}

int main(void){
	int r,i,p,c;
	while(true){
		cin >> n >> r;
		if(n==0 && r==0){
			break;
		}
		init();
		for(i=0; i<r; i++){
			cin >> p >> c;
			shuffle(p,c);
		}
		cout << cards[1] << endl;
	}
	return 0;
}