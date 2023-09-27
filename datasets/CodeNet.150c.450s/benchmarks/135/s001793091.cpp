#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int main()
{

	while (true){
		vector<int> X, Y;
		vector<int>lengthX, lengthY;
		int x, y;
		int n, m;
		int sumx, sumy;
		int count = 0;

		cin >> n >> m;
		if (n == 0 && m == 0){
			break;
		}

		rep(i, 0, n){
			cin >> y;
			Y.push_back(y);
		}
		rep(i, 0, m){
			cin >> x;
			X.push_back(x);
		}

		rep(i, 0, n){
			sumy = 0;
			rep(j, i, n){
				sumy += Y[j];
				lengthY.push_back(sumy);
			}
		}
		rep(i, 0, m){
			sumx = 0;
			rep(j, i, m){
				sumx += X[j];
				lengthX.push_back(sumx);
			}
		}
		sort(lengthX.begin(), lengthX.end());
		sort(lengthY.begin(), lengthY.end());

		int i = 0;
		int j = 0;
		while (i < lengthY.size()&&j < lengthX.size()){
			if (lengthY[i] < lengthX[j]){
				i++;
			}
			else if (lengthY[i] > lengthX[j]){
				j++;
			}
			else{
				int k = j + 1;
				while (k < lengthX.size()){
					if (lengthX[k] != lengthX[j]){
						break;
					}
					k++;
				}
				count += k - j;
				i++;
			}
		}

		cout << count << endl;
	}

	return 0;
}