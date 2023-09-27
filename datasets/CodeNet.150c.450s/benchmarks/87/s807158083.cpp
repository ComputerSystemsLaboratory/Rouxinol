#include <vector>
#include <iostream>
using namespace std;
int main(){
	int h;
	while(cin >> h,h){
		vector<int> mp(6*h);
		for(int i=0;i<h;i++){
			cin >> mp[6*i] >> mp[6*i+1] >> mp[6*i+2] >> mp[6*i+3] >> mp[6*i+4];
			mp[6*i + 5] = -1;
		}
		bool del = true;
		int ct =0;
		while(del){
			del = false;
			int ketsu = 0;
			int point = 0;
			for(int i=0;i<6*h-2;i++){
				if(mp[i] == mp[i+1] && mp[i+1] == mp[i+2] && mp[i] !=0){
					if(ketsu == 0){
						ketsu = 3;
						point = mp[i];
					}else{
						ketsu++;
					}
				}else if(ketsu > 0){
					ct += point * ketsu;
					del = true;
					for(int ki = 0;ki<ketsu;ki++){
						mp[i + 1 - ki] = 0;
					}
					ketsu = 0;//init
					point = 0;
				}
			}
			/*			for(int i = 0;i<6*h;i++){
				cout << mp[i] << " ";
				if(i%6 == 0 && i>0)cout << endl;
			}
			cout << endl;*/
			if(del){//fall
				for(int i=0;i<5;i++){//line number
					int fall_ct = 0;
					for(int j=h-1;j>=0;j--){//direction is up
						if(mp[j*6 + i] == 0){
							fall_ct++;
						}else if(fall_ct > 0){
							mp[(j + fall_ct)*6 + i ] = mp[j * 6 + i];
							mp[j*6 + i ] = 0;
						}
					}
				}
				
			}
			
			/*			for(int i = 0;i<6*h;i++){
				cout << mp[i] << " ";
				if(i%6 == 0 && i>0)cout << endl;
			}
			cout << endl;*/
			}

		cout << ct << endl;
	}
	return 0;
}
			
				