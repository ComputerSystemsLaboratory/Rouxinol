#include <iostream>
#include <map>
using namespace std;
#define X first
#define Y second
int main(){
	int n,N,d;
	while(cin >> N && N){
		map<int,pair<int,int> >coord;
		int x1=(1<<21),x2=0,y1=(1<<21),y2=0;
		
		for(int i=0;i<N;i++){
			if(i){
				cin >> n >> d;
				switch(d){
				case 0:
					coord[i].X = coord[n].X-1;
					coord[i].Y = coord[n].Y  ;
					break;
				case 1:
					coord[i].X = coord[n].X;
					coord[i].Y = coord[n].Y+1;
					break;
				case 2:
					coord[i].X = coord[n].X+1;
					coord[i].Y = coord[n].Y;
					break;
				case 3:
					coord[i].X = coord[n].X;
					coord[i].Y = coord[n].Y-1;
					break;
				}
			}else{
				coord[0].X = coord[0].Y = 0;
			}
			x1 = min(x1,coord[i].X);
			x2 = max(x2,coord[i].X);
			y1 = min(y1,coord[i].Y);
			y2 = max(y2,coord[i].Y);
		}
		cout << x2-x1+1 << " " << y2-y1+1 << endl;
	}
}