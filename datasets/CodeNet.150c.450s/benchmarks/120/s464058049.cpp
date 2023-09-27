#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <set>
#include <numeric>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

int bitCount[1024];
void setup(){
	for(int i=0;i<1024;i++){
		int c=0;
		int v=i;
		while(v){
			c+=v&1;
			v>>=1;
		}
		bitCount[i]=c;
	}
}
int table[10000];
int Count[1024];
int R,C;
void exec(){
	cin >> R >> C;
	if(R==0&&C==0){
		exit(0);
	}
	for(int j=0;j<C;j++){
		table[j]=0;
	}
	for(int k=0;k<(1<<R);k++){
		Count[k]=0;
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			char c;
			cin >> c;
			table[j]<<=1;
			if(c=='1'){
				table[j]+=1;
			}
		}
	}
	for(int j=0;j<C;j++){
		Count[table[j]]++;
	}
	int m=0;
	for(int i=0;i<(1<<(R-1));i++){
		int t=0;
		for(int j=0;j<(1<<R);j++){
			int c=bitCount[i^j];
			t+=Count[j]*max(c,R-c);
		}
		m=max(t,m);
	}
	cout << m << endl;
}
int main() {
	setup();
	while(1){
		exec();
	}
}