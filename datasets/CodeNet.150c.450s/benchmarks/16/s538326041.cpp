#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define N 20000

using namespace std;

int height[N+1];
struct P {
	int start,end;
	int sum;
};
vector<P> ln;

bool cmp(P a, P b){
	return a.start < b.start;
}

int main(){
	for(int i=0;i<N+1;i++){
		height[i] = N;
	}
	char s[N+1];
	scanf("%s", s);
	int len = strlen(s);
	for(int i=0;i<len;i++){
		int d = 0;
		if(s[i]=='/') d = 1;
		if(s[i]=='\\') d = -1;
		height[i+1] = height[i]+d;
	}
	
	int sum = 0;
	for(int high=2*N;high>=0;high--){
		int l=-1;
		for(int i=0;i<len+1;i++){
			if(height[i] == high){
				if( (l != -1) && (i != 0) && (height[i-1] < high) ){
					int m = (i-l-1);
					sum += m;
					bool f = true;
					for(int j=0;j<ln.size();j++){
						if(ln[j].start < l && i < ln[j].end){
							ln[j].sum += m;
							f = false;
						}
					}
					if(f){
						P *p = new P;
						p->start = l; p->end=i; p->sum=m;
						ln.push_back(*p);
					}
					l = -1;
				}
				if((i!=len) && height[i+1] < high){
					l = i;
				}
			}
		}
	}
	sort(ln.begin(), ln.end(), cmp);
	cout <<sum << endl;
	cout << ln.size();
	if(ln.size() != 0) cout << " ";
	for(int i=0;i<ln.size();i++){
		cout << ln[i].sum;
		if(i != ln.size()-1) cout << " ";
	}
	cout << endl;
	return 0;
}