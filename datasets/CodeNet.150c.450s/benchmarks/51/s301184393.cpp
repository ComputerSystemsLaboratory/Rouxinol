#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <set>
//#include <conio.h>
using namespace std;
 
int main(){
	vector<bool> stu(31);
	vector<int> ans(2);
	for(int i=0; i<31;++i){
		stu[i] = true;
	}
	stu[0] = false;
	for(int i=0; i<28; ++i){
		int tmp;
		cin >> tmp;
		stu[tmp] = false;
	}
	int h = 0;
	for(int i=1; i<31; ++i){
		if(stu[i] == true){
			ans[h] = i;
			++h;
		}
	}
	cout << min(ans[0],ans[1]) << endl;
	cout << max(ans[0],ans[1]) << endl;

	return 0;
}