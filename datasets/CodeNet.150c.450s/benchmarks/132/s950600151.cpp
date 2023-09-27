#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,p;
	bool flag;
	while(cin >> n >> p && n || p){
		int owan = p;
		vector<int> temoto(n,0);
		int i=0;
		while(1){
			if(owan == 1){
				owan--;
				temoto[i%n]++;
				flag = true;
				for(int j=0;j<n;j++){
					if(j == i%n)continue;
					if(temoto[j])flag = false;
				}
				if(flag)break;
			}else if(owan){
				owan--;
				temoto[i%n]++;
			}else{
				owan = temoto[i%n];
				temoto[i%n]=0;
			}
			i++;
		}
		cout << i%n << endl;
		
	}
}