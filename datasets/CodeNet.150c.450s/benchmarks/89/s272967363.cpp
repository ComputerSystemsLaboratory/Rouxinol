#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

vector<int> sosu;

bool so(int i)
{
	if( i == 1) return false; 
	int max = (int)sqrt((double)i);
	for(vector<int>::iterator it = sosu.begin(); it != sosu.end(); ++it){
		if( max < *it) return true;
		if( i % *it == 0) return false;
	}
	return true;
}

void append(int i)
{
			int max = (int)sqrt((double)i);
		bool isSosu = true;
		for(vector<int>::iterator it = sosu.begin(); it != sosu.end(); ++it){
			if(max < *it) break;
			if(i % *it == 0){ isSosu = false; break;}
		}
			if(isSosu) sosu.push_back(i);
}

int main()
{
	sosu.push_back(2);
	sosu.push_back(3);
	sosu.push_back(5);

	// %6 == 1 or 5
	for(int i = 7; i < 1000; i += 6){
		append(i);
		append(i+4);
	}

	int a,d,n;
	while(cin>>a>>d>>n,(a||d||n)){
		int count = 0,i = a;
		while(true){
			if( so(i)) count++;
			if(count >= n) break;
			i += d;
		}
		cout << i << endl;
	}
}