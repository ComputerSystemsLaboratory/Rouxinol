#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <iomanip>
#include <stack>
  
using namespace std;

#define pi 3.141592653589793

int main()
{
	int result[1000010] = {};
	int odd_result[1000010] = {};
	fill(result, result + 1000000, 1000000);
	fill(odd_result, odd_result + 1000000, 1000000);
	int trangular_sum = 0, tetrahedral_sum = 0;
	result[0] = 0;
	odd_result[0] = 0;
	for(int i = 1; i < 1000001; i++){
		trangular_sum += i;
		tetrahedral_sum += trangular_sum;
		if(tetrahedral_sum > 1000000) break;
		// result[trangular_sum] = 1;
		result[tetrahedral_sum] = 1;
		if(tetrahedral_sum % 2 == 1) odd_result[tetrahedral_sum] = 1;
		for(int j = tetrahedral_sum + 1; j < 1000001; j++){
			result[j] = min(result[j], result[j - tetrahedral_sum] + 1);
			if(tetrahedral_sum % 2 == 1) odd_result[j] = min(odd_result[j], odd_result[j - tetrahedral_sum] + 1);
		}
	}
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		cout << result[n] << " " << odd_result[n] << endl;
	}
	return 0;
}