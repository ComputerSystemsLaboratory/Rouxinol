#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int w,n;
	cin >> w >> n;
	int num[w + 1];
	for(int i = 1; i <= w; i++)num[i] = i;
	int a,b,temp;
	char c;
	while(cin >> a >> c >> b){
		temp = num[a];
		num[a] = num[b];
		num[b] = temp;
	}
	for(int i = 1; i <= w; i++)cout << num[i] << endl;
}
