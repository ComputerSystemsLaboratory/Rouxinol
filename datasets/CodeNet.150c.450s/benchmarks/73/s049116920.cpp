#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
const int MAX_N=100000;

int n;
vector<int> dat(4*MAX_N,0);

void init(int N){
	n=1;
	while(n<N){
		n*=2;
	}
}

void add(int i, int y){
	int k;
	k=n-1+i;
	dat[k] += y;
	while(k>0){
		k=(k-1)/2;
		dat[k]+=y;
	}
}

int find(int x, int y, int k,int l,int r){
	if(r <= x || l >= y){
		return 0;
	}
	if(r <= y && l >= x){
		return dat[k];
	}else{
		int vl = find(x,y,2*k+1,l,(l+r)/2);
		int vr = find(x,y,2*k+2,(l+r)/2,r);
		return vl+vr;
	}
}

int main(){
	int N,q,command,x,y;
	
	cin >> N >> q;
	init(N);
	
	for (int i=0;i<q;i++){
		cin >> command >> x >> y;
		if(command){
			cout << find(x-1,y,0,0,n) << endl;
		}else{
			add(x-1,y);
		}
	}
	return 0;
}