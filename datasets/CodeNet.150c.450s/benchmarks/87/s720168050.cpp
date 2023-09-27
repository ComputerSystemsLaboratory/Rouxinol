#include <iostream>
#include <vector>
using namespace std;

int erase(vector<vector<int>> &m)
{
	int sc=0;
	for(vector<int> &l : m){
		for(int x=0;x<3;x++){
			int n=l[x];
			if( l[x+1]==n && l[x+2]==n){
				for(int i=x;i<5;i++){
					if( l[i]==n ){
						sc+=l[i];
						l[i]=0;
					}else{
						break;
					}
				}
				break;
			}
		}
	}
	return sc;
}

void fall(vector<vector<int>> &m)
{
	int h=m.size();
	for(int x=0;x<5;x++){
		int fa=0;
		for(int y=h-1;y>=0;y--){
			if( m[y][x]==0){
				fa++;
			}else{
				if( fa>0 ){
					swap(m[y][x],m[y+fa][x]);
				}
			}
		}
	}
}

int f(vector<vector<int>> &m)
{
	int total=0;
	while(true){
		int sc = erase(m);
		if(sc==0)break;
		total+=sc;
		fall(m);
	}
	return total;
}

int main() {
	
	while(true)
	{
		int n;
		cin >> n;
		if(n==0)break;
		
		vector<vector<int>> m;
		for(int i=0;i<n;i++){
			vector<int> l;
			for(int j=0;j<5;j++){
				int x;
				cin >> x;
				l.push_back(x);
			}
			m.push_back(l);
		}
		int sc=f(m);
		cout << sc << endl;
	}	
	
	// your code goes here
	return 0;
}