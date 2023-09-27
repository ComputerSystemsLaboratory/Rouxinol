#include<iostream>

using namespace std;

const int N=100004;

int BIT[N];

void add(int x,int y){
	if(x>N)return;
	BIT[x]+=y;
	add(x+(x&-x),y);
}
int sum(int i){
	if(!i)return 0;
	return BIT[i]+sum(i-(i&-i));
}

int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int c,x,y;
		cin>>c>>x>>y;
		if(c==0){
			add(x,y);
		}else{
			if(x>y)swap(x,y);
			cout<<sum(y)-sum(x-1)<<endl;
		}
	}
}