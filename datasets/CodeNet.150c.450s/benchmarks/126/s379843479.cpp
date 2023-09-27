#include <iostream>
using namespace std;
const int MAX_N=40;
int a,b,n;
int undrcnst[MAX_N];
int isunderconstruction(int x,int y){//1 means yes,0 means no.
	int hash=x*100+y;
	for(int i=0;i<MAX_N;i++){
		if(undrcnst[i]==hash)
			return 1;
	}
	return 0;
}

int solve(){
	int roadnet[a][b];
	for(int i=0;i<a;i++)//initialization of roadnet.
		for(int j=0;j<b;j++)
			roadnet[i][j]=0;
	roadnet[0][0]=1;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(isunderconstruction(i+1,j+1)==0){
				if(i>0)
					roadnet[i][j]+=roadnet[i-1][j];
				if(j>0)
					roadnet[i][j]+=roadnet[i][j-1];
			}
		}
	}
	return roadnet[a-1][b-1];
}

int main() {
	// your code goes here
	for(;;){
		cin >> a >> b >> n;
		if(a==0&&b==0)break;
		for(int i=n;i<MAX_N;i++)undrcnst[i]=0;
		for(int i=0;i<n;i++){
			int xi,yi;
			cin >> xi >> yi;
			undrcnst[i]=xi*100+yi;
		}
		cout << solve() << endl;
	}
	return 0;
}