#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;++x){
		float m1,m2;
		float x1,x2,y1,y2;
		scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
		m1 = (y2-y1)/(x2-x1);
		scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
		m2 = (y2-y1)/(x2-x1);
		if(m1==m2){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}