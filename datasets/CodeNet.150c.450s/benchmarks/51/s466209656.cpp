#include<iostream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <tuple>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <random>
#include <time.h>
#include <cassert>
using namespace std;

int main(){
	/*for(int i=0;i<5;i++){
		int B[10];
		for(int i=0;i<10;i++){
			cin >> B[i];
			if(B[i] == 0){
				return 0; //プログラムの強制終了
			}
		}

		int sum = 0;

		for(int i=1;i<10;i++){
			sum += B[i];
		}

		cout << B[0] - sum << endl;
	}*/
	/*int s,h,o,p;
	cin >> s >> h >> o >> p;

	cout << (s+h+o+p)/60 << endl << (s+h+o+p)%60 << endl;*/
	/*int P, A, S, j, u;
	cin >> P >> A >> S >> j >> u;

	int minP=min(P,A);//最も代金が安いパスタ
	int minA=min(minP,S);
	int minj=min(j,u);//最も代金が安いジュース

	cout << (minA + minj)-50 << endl;
	//最も代金が安いパスタとジュースの代金の合計*/

	int S[31] = {};

	for (int i=1;i<29;i++){
		int y;
		cin >> y;
		S[y] = 1;
	}
	
	//sort(S,S+28);//出席番号を昇順に並べる。

	for (int i=1;i<31;i++){
		if(S[i] == 0){
			cout << i << endl;
		}
		/*int X;
		X = S[i] - i;
		if(X = 1){
			cout << i << endl;//1つ番号が抜けていた場合(28番まで)

		}
		if(X = 2){
			cout << i << i++ << endl;//２つ番号が抜けていた場合(28番まで)
			return 0;
		}*/
	/*	for (int i=27;i<29;i++){

		}*/


	}

	return 0;

}

