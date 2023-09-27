#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	  
	  int a;
	  while(cin>>a){
	  	vector<int> A;
		A.push_back(a);
		rep(i,3){
			int b;
			cin>>b;
			A.push_back(b);
		}
		
		vector<int> B;
		rep(i,4){
			int b;
			cin>>b;
			B.push_back(b);
		}
		
		int hit=0;
		int blow = 0;
		rep(i,4){
			rep(j,4){
				if(A[i]==B[j]){
					if(i==j)hit++;
					else blow++;
				}
				
			}
		}
		
		printf("%d %d\n",hit,blow);
	  }
	
}