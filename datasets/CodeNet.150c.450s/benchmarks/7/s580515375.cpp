#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
	int m;
	int max[3] = {0};
	for(int i = 0; i < 10; i++){
		cin >> m;
		if(m > max[0]){
			max[2] = max[1];
			max[1] = max[0];
			max[0] = m;
		}else if(m > max[1]){
			max[2] = max[1];
			max[1] = m;
		}else if(m > max[2]){
			max[2] = m;
		}
	}
	
	cout << max[0] << endl;
	cout << max[1] << endl;
	cout << max[2] << endl;
	
    return 0;
}