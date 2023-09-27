#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i,n,max=0;
	int count[101]={0};

    while(cin >> n){
		if(cin.eof()){break;}
		count[n]++;  //count[n]の個数を数える
		if(max<count[n]){  //最頻値maxをcount[n]の個数が超えたときmaxを更新
			max=count[n];
		}
	}
	for(i=1;i<101;i++){  //count[i]の値がmaxのとき出力
		if(max==count[i]){
			cout << i << endl;
		}
	}
	return 0;
}