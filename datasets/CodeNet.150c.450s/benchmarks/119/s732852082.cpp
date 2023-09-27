#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
				
				
void del_island(int i,int j,vector<vector<int>> &v){	
	v[i][j] = 0;
	if(v[i-1][j] == 1){
		del_island(i-1,j,v);
	}
	
	if(v[i+1][j] == 1){
		del_island(i+1,j,v);
	}
	if(v[i][j-1] == 1){
		del_island(i,j-1,v);
	}
	
	if(v[i][j+1] == 1){
		del_island(i,j+1,v);
	}
	if(v[i-1][j-1] == 1){
		del_island(i-1,j-1,v);
	}
	
	if(v[i-1][j+1] == 1){
		del_island(i-1,j+1,v);
	}
	
	if(v[i+1][j-1] == 1){
		del_island(i+1,j-1,v);
	}
	
	if(v[i+1][j+1] == 1){
		del_island(i+1,j+1,v);
	}

}

void mapping(vector<vector<int>>v,int w,int h){
	for(int i = 1;i <= h ; i++){
		for(int j = 0; j <= w ;j++){
			cout << v[i][j];
		}
		cout <<endl;
	}
	cout << endl;
}
void mapping2(int i, int j){
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
}
int count_island(int w, int h,vector<vector<int>> v){
	int count = 0;
	for(int i = 1 ; i <= h ;i++){
		for(int j = 1 ;j <= w ;j++){
			//cout << v[i][j] ;
			if(v[i][j] == 1){
				count++;
				//cout << "hello" <<endl;
				del_island(i,j,v);
				//mapping2(i,j);
				
			}
		}
	}
	return count;
}
	
int main(){ 
	int w,h;
	vector<vector<int>> v(60,vector<int>(60,0));
	int count;

	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0){
			break;
		}
		count = 0; 
		for(int i = 1; i <= 59 ; i++){
			for(int j = 1 ; j <= 59 ; j++){
				v[i][j] = 0;
			}
		}

		for(int i = 1;i <= h; i++){
			for(int j = 1; j <= w; j++){
				cin >> v[i][j];
			}
		}

		count = count_island(w,h,v);
		//mapping(v,50,50);


		cout << count << endl;
	}
}