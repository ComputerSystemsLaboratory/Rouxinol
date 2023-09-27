#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double slope_ab, slope_cd;
	int loop;
	int i = 0;

	cin >> loop;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){

		++i;

		slope_ab = (y2-y1) / (x2-x1);
		slope_cd = (y4-y3) / (x4-x3);

		if(slope_ab==slope_cd){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

		if(i==loop) break;
	}
}