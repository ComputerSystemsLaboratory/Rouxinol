#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
using namespace std;

int P1 = 0, P2 = 0;

int main(){

	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		string W1, W2;
		cin >> W1 >> W2;
		for (int j = 0;;){
			W1[j] = tolower(W1[j]-'0');
			W2[j] = tolower(W2[j]-'0');
			if (W1[j] - 'a' > W2[j] - 'a'){
				P1+=3; break;
			}
			else if (W1[j] - 'a' < W2[j] - 'a'){
				P2+=3; break;
			}
			else if (j == W1.size() && j == W2.size()){
				P1++; P2++; break; 
			}
			else j++;
		}
	}

	cout << P1 << " " << P2 << endl;

	return 0;
}
