#include <iostream>
#include <vector>
using namespace std;

int main() {
	while(true){

		vector<vector<int>> m(21);
		for(auto &mm : m){
			mm.resize(21,0);
		}
		
		int N,M;
		cin >> N;
		if(N==0)break;
		for(int i=0;i<N;i++){
			int x,y;
			cin >> x >> y;
			m[x][y]=1;
		}
		
		cin>>M;
		int x=10,y=10;
		for(int i=0;i<M;i++){
			char c;
			int d,dx=0,dy=0;
			cin >> c >> d;
			
			switch(c){
				case 'N':
					dy=1;
					break;
				case 'E':
					dx=1;
					break;
				case 'S':
					dy=-1;
					break;
				case 'W':
					dx=-1;
					break;
			}
			for(int j=0;j<d;j++){
				x+=dx;
				y+=dy;
				if(m[x][y]==1){
					m[x][y]=0;
					N--;
				}
			}
		}
		
		if(N==0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
		
	}
	return 0;
}