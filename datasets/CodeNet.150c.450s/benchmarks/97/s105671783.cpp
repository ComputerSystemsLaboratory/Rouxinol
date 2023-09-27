// 2013/06/28 Tazoe

#include <iostream>
using namespace std;

struct square{
	int x;
	int y;
};

int main()
{
	while(true){
		int N;
		cin >> N;

		if(N==0)
			break;

		struct square S[200];
		S[0].x = 0;
		S[0].y = 0;

		int x_max = S[0].x;
		int x_min = S[0].x;
		int y_max = S[0].y;
		int y_min = S[0].y;

		for(int i=1; i<N; i++){
			int n, d;
			cin >> n >> d;

			switch(d){
				case 0:
					S[i].x = S[n].x-1;
					S[i].y = S[n].y;
					if(S[i].x<x_min){
						x_min = S[i].x;
					}
					break;
				case 1:
					S[i].x = S[n].x;
					S[i].y = S[n].y+1;
					if(S[i].y>y_max){
						y_max = S[i].y;
					}
					break;
				case 2:
					S[i].x = S[n].x+1;
					S[i].y = S[n].y;
					if(S[i].x>x_max){
						x_max = S[i].x;
					}
					break;
				case 3:
					S[i].x = S[n].x;
					S[i].y = S[n].y-1;
					if(S[i].y<y_min){
						y_min = S[i].y;
					}
					break;
				default:
					break;
			}
		}

		cout << x_max-x_min+1 << ' ' << y_max-y_min+1 << endl;
	}

	return 0;
}