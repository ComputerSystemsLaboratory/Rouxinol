#include <iostream>
#include <vector>
#include <algorithm>

int hoko[4]={0,1,2,3};

using namespace std;

int main(void)
{
	int n;
	int nn,d;

	int i1,i2;

	while(1){
		cin >> n;
		if(n==0) break;

		vector<int> vx;
		vector<int> vy;
		vx.push_back(0);
		vy.push_back(0);

		for(i1=1;i1<n;i1++){
			cin >> nn >> d;

			if(d==0) {
				vx.push_back(vx[nn]-1);
				vy.push_back(vy[nn]);
			}
			else if(d==1) {
				vx.push_back(vx[nn]);
				vy.push_back(vy[nn]-1);
			}
			else if(d==2) {
				vx.push_back(vx[nn]+1);
				vy.push_back(vy[nn]);
			}
			else if(d==3) {
				vx.push_back(vx[nn]);
				vy.push_back(vy[nn]+1);
			}

			//cout << vx[i1] << " " << vy[i1] << endl;
		}

		sort(vx.begin(),vx.end());
		sort(vy.begin(),vy.end());

		cout << vx[n-1]-vx[0]+1 << " " << vy[n-1]-vy[0]+1 << endl;


	}

	return 0;
}