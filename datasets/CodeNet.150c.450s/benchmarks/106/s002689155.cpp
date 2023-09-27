#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

int a,b,c;

int main(){
	int cnt = 0;
	cin >> a >> b >> c;
	for(int i=a;i<b+1;i++){
		if(c%i==0) cnt++;
	}
	cout << cnt << endl;
}