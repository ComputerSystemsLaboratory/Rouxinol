#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<list>
#include<stack>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
#define EPS 0.000000000001

struct Line{
	double x[2],y[2];
};

int main(){
	int N;
	Line l[2];
	cin>>N;
	for(int tc=0;tc<N;tc++){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>l[i].x[j]>>l[i].y[j];
			}
		}
		double a,b;
		if(l[0].x[0]==l[0].x[1] || l[1].x[0]==l[1].x[1]){
			if(l[0].x[0]==l[0].x[1] && l[1].x[0]==l[1].x[1]) a=b=0;
			else a=0,b=1;
		}
		else{
			a = (l[0].y[1]-l[0].y[0])/(l[0].x[1]-l[0].x[0]);
			b = (l[1].y[1]-l[1].y[0])/(l[1].x[1]-l[1].x[0]);
		}
		if(abs(a-b)<EPS) puts("YES");
		else puts("NO");
	}
}