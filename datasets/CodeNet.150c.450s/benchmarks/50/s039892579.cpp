#include <iostream>

using namespace std;

int main()
{
	int coin[6] = {500, 100, 50, 10, 5, 1};
	int cost;
	
	
	while (cin >> cost, cost){
		int count = 0;
		cost = 1000 - cost;
		 
		for (int i = 0; i < 6; i++){
			if (cost >= coin[i]){
				count += cost / coin[i];
				cost %= coin[i];
			}
		}
		
		cout << count << endl;
	}
	return (0);
}