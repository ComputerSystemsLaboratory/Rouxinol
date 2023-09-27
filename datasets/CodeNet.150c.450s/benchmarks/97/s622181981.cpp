#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class rectangle{
	private:
		int name,x,y;
	public:rectangle(int name,int x,int y):name(name),x(x),y(y){}
	       int getX(){
		       return x;
	       }
	       int getY(){
		       return y;
	       }
};
int main(){
	int N;
	int n,d;
	int x,y;
	int maxX=0,minX=0,maxY=0,minY=0;
	int width=1,height=1;
	vector<rectangle> recs;
	while((cin>>N)&&(N!=0)){
		recs.push_back(rectangle(0,0,0)); // 0 into recs at (0,0)
		if(N!=1){
			for(int i=1;i<N;i++){
				cin>>n>>d;
				x = recs[n].getX();
				y = recs[n].getY();
				if(d==0) {
					recs.push_back(rectangle(i,x-1,y));
					minX = min(minX,x-1);
				}
				else if(d==1){
					recs.push_back(rectangle(i,x,y-1));
					minY = min(minY,y-1);
				}
				else if(d==2){ 
					recs.push_back(rectangle(i,x+1,y));
					maxX = max(maxX,x+1);
				}
				else if(d==3){
					recs.push_back(rectangle(i,x,y+1));
					maxY = max(maxY,y+1);
				}
			}
			width = maxX + abs(minX) + width;
			height = maxY + abs(minY) + height;
		}
		cout << width << " " << height << endl;
		recs.clear();
		maxX=0;
		minX=0;
		maxY=0;
		minY=0;
		width = 1;
		height = 1;
	}
	return 0;
}