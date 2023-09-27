#include <iostream>
using namespace std;

int main()
{
	int n,y,m,d;
	int y3,yd,m2,md,dd,y2;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> y >> m >> d;

		if(y%3!=0)	y2=y+(3-y%3);
		else y2=y;
		y3 = 334-y2/3;
		yd = y3*200 + (1000-y-y3)*195;

		m2 = m/2;
		if(y%3!=0){
			md = yd-39*m2;
			if(m%2==1){
				dd = md-d+1;
			}else{
				dd = md + (19-d+1);
			}
		}else{
			md = yd-20*m;
			dd = md+20-d+1;
		}
		cout << dd << endl;
	}

	return 0;
}