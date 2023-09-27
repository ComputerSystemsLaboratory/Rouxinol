#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int n,x,y,z,res,ans;
	int a[24][60][60],b[24][60][60];
	char c1,c2;
	string s1,s2;
	while(1){
		cin >> n;
		if(n == 0)break;
		for(int i = 0;i < 24;i++){
			for(int j = 0;j < 60;j++){
				for(int k = 0;k < 60;k++){
					a[i][j][k] = b[i][j][k] = 0;
				}
			}
		}
		for(int i = 0;i < n;i++){
			cin >> s1 >> s2;
			istringstream iss1(s1);
			iss1 >> x >> c1 >> y >> c2 >> z;
			//cout << x <<" " << y << " " << z <<endl; 
			a[x][y][z]++;
			istringstream iss2(s2);
			iss2 >> x >> c1 >> y >> c2 >> z;
			b[x][y][z]++;
		}
		res = 0;
		ans = 0;
		for(int i = 0;i < 24;i++){
			for(int j = 0;j < 60;j++){
				for(int k = 0;k < 60;k++){
					if(b[i][j][k] != 0){
						res -= b[i][j][k];
					}
					if(a[i][j][k] != 0){
						res += a[i][j][k];
						ans = max(ans,res);
					}
				}
			}
		}
		cout << ans <<endl;
	}
	return 0;
}