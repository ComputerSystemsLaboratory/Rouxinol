#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;


int kousi[21][21];

int main(){
	int N,M;
	
	while(cin>>N){
		if(N==0)break;
		
		memset(kousi,0,sizeof(kousi));
		
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			kousi[x][y]=1;
		}
		
		int M,cx=10,cy=10;
		if(kousi[cx][cy]){
			kousi[cx][cy]=0;
			--N;
		}
		cin>>M;
		for(int i=0;i<M;i++){
			char c;
			int len;
			scanf(" %c %d",&c,&len);
			int dx=0,dy=0;
			switch(c){
			case 'N':
				++dy;
				break;
			case 'E':
				++dx;
				break;
			case 'S':
				--dy;
				break;
			case 'W':
				--dx;
				break;
			}
			
			for(int j=0;j<len;j++){
				cx+=dx;
				cy+=dy;
				if(kousi[cx][cy]){
					kousi[cx][cy]=0;
					--N;
				}
			}
		}
		if(N)puts("No");
		else puts("Yes");
	}
	return 0;
}