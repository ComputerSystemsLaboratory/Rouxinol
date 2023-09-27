#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	typedef pair<int,int> pii;
	
	A:;
	
	int h,w;
	cin>>h>>w;
	
	if(h==0 && w==0)return 0;
	
	pii input = pii(h*h + w*w, h);
	
	
	pii mini = pii(200*200 + 200*200, 200);
	int minx = -1;
	int miny = -1;
	
	reps(i,1,151){
		reps(j,i+1,151){
			pii dat = pii(i*i + j*j, i);
			
			if(dat<=input)continue;
			
			if(dat<mini){
				mini = dat;
				minx = j;
				miny = i;
			}
		}
	}
	
	printf("%d %d\n",miny,minx);
	
	goto A;
}