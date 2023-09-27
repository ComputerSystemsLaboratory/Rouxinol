#include <iostream>
using namespace std;

char map[102][102];

void fruit(int h, int w,char f){
	if(map[h][w]!=f)
		return;
	map[h][w]=' ';
	fruit(h-1,w,f);
	fruit(h,w-1,f);
	fruit(h+1,w,f);
	fruit(h,w+1,f);
}


int main(){
	int h,w;
	
	while(1){
		cin>>h>>w;
		if(h==0 && w==0)
			break;
		
		for(int i=1; i<=h; i++)
			for(int j=1; j<=w; j++)
				cin>>map[i][j];
				
		int people=0;
		for(int i=1; i<=h; i++){
			for(int j=1; j<=w; j++){
				if(map[i][j]=='@'){
					people++;
					fruit(i,j,'@');
				}
				else if(map[i][j]=='*'){
					people++;
					fruit(i,j,'*');
				}
				else if(map[i][j]=='#'){
					people++;
					fruit(i,j,'#');
				}
			}
		}
		cout<<people<<endl;
	}
	return 0;
}