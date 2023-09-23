#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int A[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int cunt = 0;

void depth(int n, int s, int i){
	
	if (n == 0 && s == 0){
		cunt++;
		return;
	}
	else if (n == 0) return;
	else if (s < 0) return;
	else if (i == 10) return;


	depth(n - 1, s - A[i],i+1);
	depth(n, s, i+1);

}

int main(){
	int n, s;
	while (cin >> n >> s){
		if (n == 0 && s == 0) break;
		depth(n, s, 0);
		cout << cunt << endl;
		cunt = 0;
	}
	return 0;
}