#include <iostream>
#include <string>
using namespace std;

const int hmax = 50;
int w, h;
void move(string area[], int i, int j){
	area[i][j] = '0';
	for(int k = -1; k <= 1; k++){
		for(int l = -1; l <= 1; l++){
			if(i+k < h && i+k >= 0 && j+l < w && j+l >= 0)
				if(area[i+k][j+l] == '1') move(area,i+k,j+l);
		}
	}
}

int main(){
	while(cin >> w >> h){
		string area[hmax];
		if(w == 0 && h == 0) break;
		for(int i = 0; i < h; i++){
			string s;
			for(int j = 0; j < w; j++){
				char c;
				cin >> c;
				s.push_back(c);
			}
			area[i] = s;
		}
		int count = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(area[i][j] == '1'){
					count++;
					move(area,i,j);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}