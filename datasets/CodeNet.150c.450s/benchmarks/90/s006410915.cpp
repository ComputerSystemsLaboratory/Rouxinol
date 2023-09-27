#include <iostream>
using namespace std;

int main(){
	int num[101] = {0}, n, max=0;
	while(cin >> n) num[n]++;
	for(int i=1; i<=100; i++)
		if(max < num[i]) max = num[i];
	for(int i=1; i<=100; i++)
		if(num[i] == max) cout << i << '\n';
	return 0;
}