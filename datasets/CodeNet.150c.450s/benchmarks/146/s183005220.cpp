#include <iostream>
#include <map>

using namespace std;

int main(void){
	int n;
	float x[2],y[2];
	pair<float,float> v[2];

	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin >> x[0] >> y[0] >> x[1] >> y[1];
			v[j]=make_pair(x[0]-x[1],y[0]-y[1]);
		}
		cout << (v[0].first*v[1].second-v[0].second*v[1].first?"NO":"YES") << endl;
	}
		
	return 0;
}