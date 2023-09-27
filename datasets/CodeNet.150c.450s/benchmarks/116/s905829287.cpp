#include <iostream>
#include <algorithm>
#define INF 90000000000
using namespace std;

int ary[100010];
int main(){
	int N,K;
	long long cnt,ccnt;
	while(1){
		cin>>N>>K;
		if(N==0&&K==0) break;
		for(int i=1;i<=N;i++){
			cin>>ary[i];
		}
		ccnt=0;
		for(int j=1;j<=K;j++){
			ccnt+=ary[j];
		}
		cnt=ccnt;
		for(int i=2;i+(K-1)<=N;i++){
			ccnt+=ary[i+(K-1)];
			ccnt-=ary[i-1];
			cnt=max(cnt,ccnt);
		}
		cout<<cnt<<endl;
	}
	return 0;
}