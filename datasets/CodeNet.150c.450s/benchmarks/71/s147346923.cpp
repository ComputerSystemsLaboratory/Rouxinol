
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a, b, c, d, n, count;

	while(cin >> n){
		count = 0;

		for(a = 0; a <= 9; a++){
			for(b = 0; b <= 9; b++){
				for(c = 0; c <= 9; c++){
					for(d = 0; d <= 9; d++){
						if((a + b + c + d ) == n){
							count++;
							break;
						}
						if((a + b + c + d) > n){
							break;
						}
					}
					if((a + b + c) > n){
						break;
					}
				}
				if((a + b) > n){
					break;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}