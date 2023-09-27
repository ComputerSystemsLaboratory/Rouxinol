#include<bits/stdc++.h>
#define N 1000000
using namespace std;
int H;
vector<int> data(N);

int par(int i){
	return i/2;
}
int lef(int i){
	return i*2;
}
int right(int i){
	return i*2 + 1;
}

void maxheap(int i){
	int le,ri,max;
	le = lef(i);
	ri = right(i);
	
	if(le <= H && data.at(le) > data.at(i)) max = le;
	else max = i;

	if(ri <= H && data.at(ri) > data.at(max)){
		max = ri;
	}
	if(max != i){
		swap(data.at(i),data.at(max));
		maxheap(max);
	}
}

int main(){
	cin >> H;
	for(int i=1;i<=H;i++) cin >> data.at(i);
	
	for(int i=H/2;i>=1;i--) maxheap(i);
	
	for(int i=1;i<=H;i++){
		cout << " " << data.at(i);
	}
	cout << endl;
}
