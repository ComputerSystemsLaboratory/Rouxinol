#include<bits/stdc++.h>
using namespace std;
#define print(a) cout<<a<<endl;
int aaa[200] = {}, bbb[200] = {}, counta=1,countb=1, ansa, ansb = 0, xxx[1100000] = {}, yyy[1100000] = {};

int foo(int n, int x){//cout<<n<<" "<<x<<" "<<xxx[x]<<endl;;
	int mi = 1000000;
	if(xxx[n]) return xxx[n]+x;
	if(x > 5) return mi;
	for(int i = counta-1; i >= 1; i--){
		if(aaa[i] < n){
			mi = min(foo(n-aaa[i],x+1), mi);
			if(mi - n == 1)break;
		} else if(aaa[i] < n/2) break;
	}
	
	xxx[n] = mi;
	return mi;
}
int boo(int n, int x){//if(ansb){cout<<n<<" B "<<x<<" "<<yyy[n]<<endl;}
	int mi = 1000000;
	if(yyy[n]) return yyy[n]+x;
	for(int i = countb-1; i >= 1; i--){
		//if(ansb)cout<<bbb[i]<<" "<<n<<endl;
		if(bbb[i] < n){
			mi = min(boo(n-bbb[i],x+1), mi);
			if(mi - n == 1)break;
		} else if(bbb[i] < n/2) break;
	}
	//if(ansb)cout<<"aaaa "<<n<<" "<<x<<" "<<mi<<endl;
	yyy[n] = mi;
	return mi;
}

int main(){
	int i, n, abc;
	for(i = 1; abc <= 1000000; i++){
		abc = (i*(i+1)*(i+2))/6;
		xxx[abc] = 1;
		if(abc%2 == 1){
			yyy[abc] = 1;
			bbb[countb++] = abc;
		}
		aaa[counta++] = abc;
	//	cout<<counta<<" "<<i<<" "<<abc<<endl;;
	}
//	print(1);
	for(i = 1; i <= 1000000; i++){//cout<<i<<endl;
		xxx[i] = foo(i, 0);//cout<<i<<endl;
		yyy[i] = boo(i, 0);//if(i == 966077) cout<<xxx[i]<<" "<<yyy[i]<<endl;
	}	//cout<<"b"<<endl;
	/*for(int i = 1; i <= 1000000; i++){
		//cout<<i<<" "<<yyy[i]<<endl;
	//	if(yyy[i+1]-yyy[i] > 1)cout<<yyy[i+1]<<" "<<yyy[i]<<" "<<i+1<<i<<endl;
	}*/
//	print('a');//ansb = 1;
	while(1){
		cin>>n;
		if(n == 0) break;
		cout<<foo(n,0)<<" "<<boo(n,0)<<endl;
	}
	return 0;
}

