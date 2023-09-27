#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int hen[3];
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
			cin >> hen[j];
			hen[j] *= hen[j];
		}
		
		sort(hen, hen + 3);
		
		if ((hen[0] + hen[1]) == hen[2]){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
	
	return (0);
}