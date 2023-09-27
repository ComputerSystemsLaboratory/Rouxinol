#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int compare(string taro,string hana,int *t,int *h){
		int m;

		if( taro == hana){
				*t += 1;
				*h += 1;
		}

		m = (taro.size() > hana.size()) ? taro.size():hana.size();
		for(int i = 0;i < m;i++){
				if(taro[i] -'a' > hana[i] - 'a'){
						*t += 3;
						break;
				}else if(taro[i] -'a' < hana[i] -'a'){
						*h += 3;
						break;
				}
		}
		return 0;
}

int main(){
		int n,taro_score = 0,hana_score = 0;
		string taro,hana;

		cin >> n;
		for(int i = 0;i < n;i++){
				cin >> taro >> hana;
				compare(taro,hana,&taro_score,&hana_score);
		}
		cout << taro_score << " " << hana_score << endl;
		return 0;
}