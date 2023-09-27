#include <iostream>
using namespace std;

bool submitted[31] = {false};

int main(){
    int n;
    for (int i = 1; i <= 28; i++){
	cin >> n;
	submitted[n] = true;
    }
    for (int i = 1; i <= 30; i++){
	if (!submitted[i]) cout << i << endl;
    }
}