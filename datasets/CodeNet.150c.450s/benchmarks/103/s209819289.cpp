#include <iostream>
using namespace std;

int a[10] = {0,1,2,3,4,5,6,7,8,9}, N, S;

int part(int index, int sum, int elem){
	if (sum > S || elem > N) return 0;
	if (sum == S && elem == N) return 1;
	if (index >= 10) return 0;
	return part(index + 1, sum + a[index], elem + 1) + part(index+1, sum, elem);
}

int main(){
	while (cin >> N >> S)
	{
		if (!N && !S) break;
		cout << part(0,0,0) << endl;
	}
	return 0;
}