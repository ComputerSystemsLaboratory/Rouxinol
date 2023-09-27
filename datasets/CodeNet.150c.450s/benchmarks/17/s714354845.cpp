#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Number(5);
	for(int i = 0; i < 5; i++){
		scanf("%d", &Number[i]);
	}
	sort(Number.begin(), Number.end(), greater<int>());
	for(int i = 0; i < 5; i++){
		if(i != 4){
			printf("%d ", Number[i]);
		}else{
			printf("%d\n", Number[i]);
		}
	}
	return 0;
}