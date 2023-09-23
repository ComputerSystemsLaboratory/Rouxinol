#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	int bucket[101] = {0};
	int max = 0;
	
	while (scanf("%d", &num) != EOF){
		bucket[num]++;
	}
	
	for (int i = 1; i <= 100; i++){
		if (bucket[i] > max) max = bucket[i];
	}
	
	for (int i = 1; i <= 100; i++){
		if (max == bucket[i]) cout << i << "\n";
	}
	
	return (0);
}
