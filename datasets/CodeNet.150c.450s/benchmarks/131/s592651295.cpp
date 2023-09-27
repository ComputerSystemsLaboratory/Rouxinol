#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int L, b;
	while( 1 ){
		vector<int> a;
		cin >> b >> L;
		a.push_back(b);
		if( a[0] == 0 && L == 0 ) break;
		int i = 0;
		while( i < 20 ){
			vector<int> rank;
			int max = 0, min = 0;
			int number = a[i];
			//cout << number << ' ';
			for( int j = 0; j < L; j++ ){
				rank.push_back(number % 10);
				number /= 10;
			}
			sort( rank.begin(), rank.end() );
			for( int j = 0; j < L; j++ ){
				max += rank[j] * pow(10.0,(double)j);
			}
			sort( rank.begin(), rank.end(), greater<int>() );
			for( int j = 0; j < L; j++ ){
				min += rank[j] * pow(10.0,(double)j);
			}
			i++;
			a.push_back(max - min);		//a[i] = max -min;
			//cout << max << ' ' << min << ' ' << a[i] << endl;
			for( int j = 0; j < i; j++ ){
				if( a[j] == a[i] ){
					cout << j << ' ' << a[i] << ' ' << i - j << endl;
					goto end;
				}
			}
			rank.clear();
		}
	end:
		a.clear();
	}
}