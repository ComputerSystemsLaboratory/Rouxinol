#include <iostream>
#include <vector>
#include<algorithm>
#include<iomanip>
#include<queue>
using namespace std;
#define rep(i,n) for(int i=1;i<=(int)(n);i++)
#define Rep(i,n) for(int i=0;i<=(int)(n-1);i++)

int main() {
	int N,R;
	while(cin>>N>>R && N>0 && R>0){
		int p[R],c[R];
		Rep(i,R) cin>>p[i]>>c[i];
		int card[N];
		Rep(i,N) card[i] = N - i;
		Rep(i,R) rotate(card,card+p[i]-1,card+p[i]+c[i]-1);
		cout<<card[0]<<endl;
	}
	return 0;
}
