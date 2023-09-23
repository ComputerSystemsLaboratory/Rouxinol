#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, tmp, count;
	while(cin >> n){
		count = 0;
		for(int i = 0; i <= 9; i++){
			if(i > n){
				break;
			}
			for(int j = 0; j <= 9; j++){
				if((i + j) > n){
					break;
				}
				for(int k = 0; k <= 9; k++){
					tmp = i + j + k;
					if(tmp > n){
						break;
					}
					for(int l = 0; l <= 9; l++){
						if(n == (tmp+l)){
							count++;
							break;
						}
					}
				}
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}