// 2011/09/05 Tazoe

#include <iostream>
using namespace std;

int main()
{
	const int B[11] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

	while(true){
		int R, C;
		cin >> R >> C;
		if(R==0&&C==0)
			break;

		int S[10][10000];
		for(int i=0; i<R; i++)
			for(int j=0; j<C; j++)
				cin >> S[i][j];

		int max = -1;
		for(int i=0; i<B[R-1]; i++){
			for(int j=0; j<R; j++){
				if(S[j][0]!=i/B[j]%2)
					for(int k=0; k<C; k++)
						S[j][k] = (S[j][k]+1)%2;
			}

			int sum = 0;
			for(int j=0; j<C; j++){
				int sum2 = 0;
				for(int k=0; k<R; k++)
					sum2 += S[k][j];
				if(sum2<R-sum2)
					sum2 = R-sum2;
				sum += sum2;
			}

//			cout << sum << endl;

			if(sum>max)
				max = sum;

/*
		for(int i2=0; i2<R; i2++){
			for(int j2=0; j2<C; j2++){
				cout << S[i2][j2];
				if(j2<C-1)
					cout << ' ';
				else
					cout << endl;
			}
		}
*/
		}
		cout << max << endl;
	}

	return 0;
}