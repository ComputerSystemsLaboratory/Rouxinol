#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <queue>
#include <cctype>
#include <climits>
#include <stack>
#include <unordered_map>
  
using namespace std;


int main(){

	int h;
	int st[10][5];
	bool next;
	while(cin>>h,h){
		next=true;
		
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++) scanf("%d",&st[i][j]);
		}
		
		int res=0;
		while(next){
			next=false;
			
			for(int i=0;i<h;i++){
				for(int left=0;left+2<5;left++){
					int right=left;
					while(right+1<5 && st[i][right+1]==st[i][left]) right++;
					
					//cout<<left<<" "<<right<<endl;
					
					if(right-left+1>=3){
						
						res+=(right-left+1)*st[i][left];
						for(int j=left;j<=right;j++) st[i][j]=0;
					}
					left=right;
				}
			}
			
			for(int i=h-2;i>=0;i--){
				for(int j=0;j<5;j++){
					if(st[i][j]==0) continue;
					int pos=i;
					while(pos+1<h && st[pos+1][j]==0){
						next=true;
						swap(st[pos][j],st[pos+1][j]);
						pos++;
					}
				}
			}
		}
		cout<<res<<endl;
		
	}
	
	return 0;
}