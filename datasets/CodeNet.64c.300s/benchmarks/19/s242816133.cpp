#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	int n;
	int max,tmpmax1,tmpmax2;
	while(cin >> n && n != 0){
		max = -100001;
		int *factor = new int[n];
		
		for(int i = 0; i < n; i++){
			cin >> factor[i];
		}

		for(int i = 0; i < n; i++){
			tmpmax1 = 0;
			tmpmax2 = -100001;
			for(int j = i; j < n; j++){
				tmpmax1 += factor[j];
				if(tmpmax2 < tmpmax1){
					tmpmax2 = tmpmax1;
				}
			}
			if(max < tmpmax2){
				max = tmpmax2;
			}
		}
		delete [] factor;
		cout << max << endl;
	}
	
	return 0;
}