// 2013/06/14 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while(true){
		int a[21];
		int L;
		cin >> a[0] >> L;

		if(a[0]==0&&L==0)
			break;

		for(int i=1; i<=20; i++){
			int b = a[i-1];

			int tmp[6];
			for(int j=0; j<L; j++){
				tmp[j] = b%10;
				b /= 10;
			}

			sort(tmp, tmp+L);

			int b_max = 0;
			for(int j=L-1; j>=0; j--){
				b_max *= 10;
				b_max += tmp[j];
			}

			int b_min = 0;
			for(int j=0; j<L; j++){
				b_min *= 10;
				b_min += tmp[j];
			}

			a[i] = b_max-b_min;

//			cout << a[i] << endl;

			bool flg = false;

			for(int j=0; j<i; j++){
				if(a[j]==a[i]){
					cout << j << ' ' << a[i] << ' ' << i-j << endl;
					flg = true;
					break;
				}
			}

			if(flg)
				break;
		}
	}

	return 0;
}