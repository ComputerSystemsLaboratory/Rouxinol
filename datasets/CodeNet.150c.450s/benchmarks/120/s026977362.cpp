#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void){
	int h,w;
	
	while(cin >> h >> w){
		if((h|w) == 0) break;
		
		char tmpc;
		string tmps;
		vector<string> senbei,working;
		for(int i=0;i<h;i++){
			tmps = "";
			for(int j=0;j<w;j++){
				cin >> tmpc;
				tmps += tmpc;
			}
			senbei.push_back(tmps);
		}
		
		int maxi = 0;
		//for all pattern of reversing rows
		for(int i=0;i<1<<h;i++){
			int tmpnum=0;
			working = senbei;
			//reverse determined row
			for(int j=0;j<h;j++){
				if(i&1<<j){
					for(int k=0;k<w;k++){
						if(working[j][k] == '0'){
							working[j][k] = '1';
						}else{
							working[j][k] = '0';
						}
					}
				}
			}
			//count for each column
			int maxincol;
			for(int j=0;j<w;j++){
				maxincol = 0;
				for(int k=0;k<h;k++){
					if(working[k][j] == '0'){
						maxincol++;
					}
				}
				tmpnum += max(maxincol, h - maxincol);
			}
			maxi = max(maxi, tmpnum);
		}
		cout << maxi << endl;
	}
}