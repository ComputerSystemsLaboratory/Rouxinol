#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef pair<int,int> P;
#define X first
#define Y second
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int main(){
	int n;
	while(cin >> n , n){
		map< int,pair<int,int> > data;
		data[0] = make_pair(0,0);
		
		int a=0,b=0,c=0,d=0;
		
		rep(i,n-1){
			int id,di;
			cin >> id >> di;
			int x = data[id].X + dx[di];
			int y = data[id].Y + dy[di];
			
			a = min(x,a) , b = max(x,b);
			c = min(y,c) , d = max(y,d);
			
			data[i+1] = make_pair(x,y);
		}
		cout << b-a+1 << " " << d-c+1 << endl;
	}
}