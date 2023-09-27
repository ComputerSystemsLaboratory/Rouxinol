// 2016/04/27 Tazoe

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
		for(int i=0; i<H; i++){
			for(int j=0; j<5; j++){
				cin >> S[i][j];
			}
		}

		int sco = 0;

	while(true){
		bool flg = false;

		for(int i=0; i<H; i++){
			if(S[i][2]==0)
				continue;

			if(S[i][2]==S[i][0] && S[i][2]==S[i][1] && S[i][2]==S[i][3] && S[i][2]==S[i][4]){
				sco += (S[i][2]*5);
				S[i][2] = S[i][0] = S[i][1] = S[i][3] = S[i][4] = 0;
				flg = true;
			}
			else if(S[i][2]==S[i][0] && S[i][2]==S[i][1] && S[i][2]==S[i][3]){
				sco += (S[i][2]*4);
				S[i][2] = S[i][0] = S[i][1] = S[i][3] = 0;
				flg = true;
			}
			else if(S[i][2]==S[i][1] && S[i][2]==S[i][3] && S[i][2]==S[i][4]){
				sco += (S[i][2]*4);
				S[i][2] = S[i][1] = S[i][3] = S[i][4] = 0;
				flg = true;
			}
			else if(S[i][2]==S[i][0] && S[i][2]==S[i][1]){
				sco += (S[i][2]*3);
				S[i][2] = S[i][0] = S[i][1] = 0;
				flg = true;
			}
			else if(S[i][2]==S[i][1] && S[i][2]==S[i][3]){
				sco += (S[i][2]*3);
				S[i][2] = S[i][1] = S[i][3] = 0;
				flg = true;
			}
			else if(S[i][2]==S[i][3] && S[i][2]==S[i][4]){
				sco += (S[i][2]*3);
				S[i][2] = S[i][3] = S[i][4] = 0;
				flg = true;
			}
		}

		if(!flg)
			break;

		for(int j=0; j<5; j++){
			for(int i=H-1; i>=0; i--){
				if(S[i][j]!=0)
					continue;

				for(int k=i-1; k>=0; k--){
					if(S[k][j]!=0){
						S[i][j] = S[k][j];
						S[k][j] = 0;
						break;
					}
				}
			}
		}
/*
		for(int i=0; i<H; i++){
			for(int j=0; j<5; j++){
				cout << S[i][j];
			}
			cout << endl;
		}
*/
	}

		cout << sco << endl;
	}

	return 0;
}