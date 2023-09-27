#include <iostream>
#include <algorithm>
#define MAX 1500*1000
using namespace std;

int ish[MAX+1];
int isw[MAX+1];

int hlist[1501];
int wlist[1501];

int main(void){
	int N,M;
	while(cin  >> N >> M,N|M){
		for(int i=0;i<=MAX;i++)
			ish[i]=isw[i]=0;
		for(int i=0;i<=1500;i++)
			hlist[i]=wlist[i]=0;
		for(int i=1;i<=N;i++){
			int tmp;
			cin >> tmp;
			hlist[i]=hlist[i-1]+tmp;
		}
		for(int i=1;i<=M;i++){
			int tmp;
			cin >> tmp;
			wlist[i]=wlist[i-1]+tmp;
		}
		for(int i=0;i<=N;i++)
			for(int j=i+1;j<=N;j++)
				ish[hlist[j]-hlist[i]]++;
		for(int i=0;i<=M;i++)
			for(int j=i+1;j<=M;j++)
				isw[wlist[j]-wlist[i]]++;
		long long int ans=0;
		for(int i=1;i<=MAX;i++)
			ans+=isw[i]*ish[i];
		cout << ans << endl;
	}
	return 0;
}