#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t[1000][3], cnttri, dataset_num, i;
	cin>>dataset_num;
	for(cnttri=0;cnttri<dataset_num;cnttri++){
		cin>> t[cnttri][0] >> t[cnttri][1]>> t[cnttri][2];
		sort(t[cnttri], t[cnttri]+3);
	}
	for(i=0;i<dataset_num;i++){
		if(t[i][2]*t[i][2] == t[i][1]*t[i][1] + t[i][0]*t[i][0]){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}