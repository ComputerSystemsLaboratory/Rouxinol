#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i){
		vector<double> a(2),b(2),c(2),d(2);
		double tmp;
		cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>d[0]>>d[1];
		double x1=b[0]-a[0],y1=b[1]-a[1];
		double x2=d[0]-c[0],y2=d[1]-c[1];
		if(x1*y2-x2*y1==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}