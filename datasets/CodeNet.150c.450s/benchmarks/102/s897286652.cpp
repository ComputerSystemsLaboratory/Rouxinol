#include <iostream>
#include <utility>
#include <stack>
#include <string>
using namespace std;

typedef pair<int,int> pii;

int main(void){
	int h,w;
	stack<pii> s;
	string m[21];
	while(cin>>w>>h,w||h){
		for(int i=0;i<h;i++)cin>>m[i];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(m[i][j]=='@'){
					s.push(pii(i,j));
					i=j=999;
				}
			}
		}
		int c=0;
		while(!s.empty()){
			pii a=s.top();s.pop();
			int i=a.first;
			int j=a.second;
			if(!(0<=i&&i<h&&0<=j&&j<w))continue;
			if(m[i][j]=='#')continue;
			c++;
			m[i][j]='#';
			s.push(pii(i+1,j));
			s.push(pii(i-1,j));
			s.push(pii(i,j+1));
			s.push(pii(i,j-1));
		}
		cout<<c<<endl;
	}
	return 0;
}