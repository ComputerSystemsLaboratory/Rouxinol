#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<set>
#include<string>
#include<queue>
#include<map>
#include<algorithm>
#include<string.h>

#define INF 99999999

using namespace std;

int main(){
	int n;

	cin >> n;
	do{
		int point[110];
		int sum = 0;

		for (int i = 0; i < n;i++){
			cin >> point[i];
		}

		sort(point, point+n);

		for (int i = 1;i < n - 1;i++){
			sum += point[i];
		}

		cout << sum / (n - 2) << endl;

		cin >> n;
	} while (n != 0);
	


	return 0;
}