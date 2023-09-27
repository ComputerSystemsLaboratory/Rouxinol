#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int w,h;
	vector<string> f(30);
	vector< vector<int> > g(30,vector<int>(30,0));
	int count = 0;
	int count2 = 0;

	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0){
			break;
		}

		for(int i = 0;i < h; i++){
			cin >> f[i];
		}



		for(int i = 0;i < h; i++){
			for(int j = 0;j < w;j++){
				g[i][j] = 0;
			}
		}
		count = 0;
		count2 = 0;
		while(1){
			for(int i = 0; i < h; i++){
				for(int j = 0; j < w;j++){
					if(f[i][j] == '@' && count== 0){
						g[i][j] = 1;
						count2++;
					}else if(g[i][j] == 1){
						if(i != 0){
							if(f[i-1][j] == '.'){
								if(g[i-1][j] == 0){
									count2++;
								}
								g[i-1][j] = 1;

							}
						}
						if(i != h-1){
							if(f[i+1][j] == '.'){
								if(g[i+1][j] == 0){
									count2++;
								}
								g[i+1][j] = 1;
							}
						}
						if(j != 0){
							if(f[i][j-1] == '.'){
								if(g[i][j-1] == 0){
									count2++;
								}
								g[i][j-1] = 1;
							}
						}
						if(j != w-1){
							if(f[i][j+1] == '.'){
								if(g[i][j+1] == 0){
									count2++;
								}
								g[i][j+1] = 1;
							}
						}
					}else{}
				}
			}

			if(count == count2){
				cout << count << endl;
				break;
			}
			count = count2;
		}

	}
}