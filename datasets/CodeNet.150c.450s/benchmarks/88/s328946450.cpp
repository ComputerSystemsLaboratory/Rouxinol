#include<iostream>
#include<vector>

using namespace std;

vector<int> ansh,answ;

int main(){
	while(1){
		int h,w;
		cin >> h >> w;
		if(h + w == 0) break;
		
		int dia = h*h + w*w;
		
		int ah,aw;
		int dmin = 1e9;
		
		bool f = false;
		
		for(int i = 1;i < 150;i++){
			for(int j = i + 1;j < 150;j++){
				int tdia = i*i + j*j;
				if(tdia >= dia){
					if(tdia == dia){
						if(i > h){ah = i;aw = j;f = true;break;}
					}else{
						if(dmin >= tdia){
							if(dmin == tdia){
								if(ah > i){
									ah = i;
									aw = j;
									dmin = tdia;
								}
							}else{
								ah = i;
								aw = j;
								dmin = tdia;
							}
						}
					}
				}
			}
			if(f) break;
		}
		
		ansh.push_back(ah);
		answ.push_back(aw);
	}
	
	for(int i = 0;i < ansh.size();i++) cout << ansh[i] << " " << answ[i] << endl;
	
	return 0;
}