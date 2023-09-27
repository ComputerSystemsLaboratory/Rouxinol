#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int check[101]={0};
	int n,MAX=0;
	while(cin >> n, !cin.eof()){
		check[n]++;
	}
	for(int i=1;i<=100;i++)
		MAX=max(MAX,check[i]);
	for(int i=1;i<=100;i++)
		if(check[i]==MAX)
			cout << i << endl;
	return 0;
}