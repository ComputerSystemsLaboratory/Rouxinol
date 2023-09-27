#include <iostream>
#include <queue>
using namespace std;

int ary[40],ary2[1000010];
bool nopri[1000010];
int main(){
	int N;
	for(int i=1;i<=31;i++){
		cin>>ary[i];
		if(cin.eof()){
			N=i-1;
			break;
		}
	}

	int cnt=2;
	while(cnt<1000000){
		for(int i=2;i*cnt<1000000;i++){
			nopri[i*cnt]=true;
		}
		cnt++;
		while(nopri[cnt])cnt++;
	}
	cnt=0;
	for(int i=2;i<=1000000;i++){
		if(!nopri[i]) cnt++;
		ary2[i]=cnt;
	}
	for(int i=1;i<=N;i++){
		cout<<ary2[ary[i]]<<endl;
	}
	return 0;
}