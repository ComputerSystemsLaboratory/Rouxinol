#include <bits/stdc++.h>	//C++標準ライブラリ一括読み込み
using namespace std;

// ax+by=c
// dx+ey=f
double unko(double x){
	int y=int(round(x*1000));
	return double(y)/1000;
}

int main(){
    double a,b,c,d,e,f,x,y;
	while(cin>>a>>b>>c>>d>>e>>f){
		x=(c*e-b*f)/(a*e-b*d);
		y=(c*d-a*f)/(b*d-a*e);
		printf("%.3f %.3f\n",unko(x),unko(y));
	}
    return 0;
}
