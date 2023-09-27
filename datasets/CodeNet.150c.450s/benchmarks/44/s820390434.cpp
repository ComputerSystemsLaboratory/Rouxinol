#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)


int a[4],b[4];

int main(){
	
	
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		int hit=0,blo=0;
		rep(i,4){
			if(a[i]==b[i]){
				a[i] = -1;
				b[i] = -2;
				hit++;
			}
		}
		rep(i,4){
			rep(j,4){
				if(a[i] == b[j]){
					a[i]=-1;
					b[j]=-2;
					blo++;
				}
			}
		}
		cout<<hit<<" "<<blo<<endl;
		
	}
	return 0;
}