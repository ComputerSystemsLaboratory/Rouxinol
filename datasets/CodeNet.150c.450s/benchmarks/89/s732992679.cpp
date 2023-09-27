#include<iostream>
#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=(j);i<=(k);i++)
#define fs first
#define sc second
#define pb push_back

using namespace std;

#define N 1000000
int inp[N];

int main(){
	int a,d,n;
	inp[0]=inp[1]=1;
	reps(i,2,N-1){
		if(!inp[i])for(int j=i*2;j<N;j+=i)inp[j]=1;
	}
	while(cin >> a >> d >> n){
		if(!(a+d+n))break;
		while(n){
			if(!inp[a]) n--;
			a += d;
		}
		cout << a-d << endl;
	}
	return 0;
}