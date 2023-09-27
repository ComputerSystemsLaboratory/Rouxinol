#include<bits/stdc++.h>
using namespace std;


int foo(int c[2][60][60], int y, int x){
	if(c[1][y][x] == 1) return 0;
	c[1][y][x] = 1;
	if(c[0][y][x] == 0) return 0;
	
	for(int i = -1; i <= 1; i++)
		for(int j = -1; j <= 1; j++)
			foo(c, y+i, x+j);
	
	return 1;
}

int main(){
	int h, w;
	
	while(1){
		int  c[2][60][60] = {}, count = 0;
		
		cin>>w>>h;
		
		if(w == 0 && h == 0) break;
		
		for(int i = 1; i <= h; i++)
			for(int j = 1; j <= w; j++)
				cin>>c[0][i][j];
		
		for(int i = 1; i <= h; i++)
			for(int j = 1; j <= w; j++)
				if(foo(c, i, j) == 1) count++;
				
		cout<<count<<endl;
	}
	return 0;
}
