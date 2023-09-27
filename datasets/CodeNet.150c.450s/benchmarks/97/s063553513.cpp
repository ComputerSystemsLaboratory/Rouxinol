// 2012/05/19 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int N;
		cin >> N;

		if(N==0)
			break;

		int S[200][2];
		S[0][0] = 0;
		S[0][1] = 0;

		int x_max = 0;
		int x_min = 0;
		int y_max = 0;
		int y_min = 0;

		for(int i=1; i<N; i++){
			int n, d;
			cin >> n >> d;

			switch(d){
				case 0:
					S[i][0] = S[n][0]-1;
					S[i][1] = S[n][1];
					break;
				case 1:
					S[i][0] = S[n][0];
					S[i][1] = S[n][1]+1;
					break;
				case 2:
					S[i][0] = S[n][0]+1;
					S[i][1] = S[n][1];
					break;
				case 3:
					S[i][0] = S[n][0];
					S[i][1] = S[n][1]-1;
					break;
			}

			if(S[i][0]>x_max){
				x_max = S[i][0];
			}
			else if(S[i][0]<x_min){
				x_min = S[i][0];
			}
			else if(S[i][1]>y_max){
				y_max = S[i][1];
			}
			else if(S[i][1]<y_min){
				y_min = S[i][1];
			}
		}

//		for(int i=0; i<N; i++)
//			cout << S[i][0] << ' ' << S[i][1] << endl;

		cout << x_max-x_min+1 << ' ' << y_max-y_min+1 << endl;
	}

	return 0;
}