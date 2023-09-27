// 2018/01/15 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int H;
		cin >> H;

		if(H==0)
			break;

		int S[10][5];
		for(int y=0; y<H; y++){
			for(int x=0; x<5; x++){
				cin >> S[y][x];
			}
		}

		int sco = 0;

		while(true){
			bool flg = false;

			for(int y=0; y<H; y++){
				int m = S[y][2];
				if(m==0)
					continue;

				if(S[y][0]==m && S[y][1]==m){
					sco += m*3;  S[y][0] = S[y][1] = S[y][2] = 0;  flg = true;
					if(S[y][3]==m){
						sco += m;  S[y][3] = 0;
						if(S[y][4]==m){
							sco += m;  S[y][4] = 0;
						}
					}
				}
				else if(S[y][1]==m && S[y][3]==m){
					sco += m*3;  S[y][1] = S[y][2] = S[y][3] = 0;  flg = true;
					if(S[y][4]==m){
						sco += m;  S[y][4] = 0;
					}
				}
				else if(S[y][3]==m && S[y][4]==m){
					sco += m*3;  S[y][2] = S[y][3] = S[y][4] = 0;  flg = true;
				}
			}

			if(!flg)
				break;

			for(int x=0; x<5; x++){
				for(int y=H-1; y>=0; y--){
					if(S[y][x]!=0)
						continue;

					for(int y2=y-1; y2>=0; y2--){
						if(S[y2][x]!=0){
							S[y][x] = S[y2][x];
							S[y2][x] = 0;
							break;
						}
					}
				}
			}
		}

		cout << sco << endl;
	}

	return 0;
}

