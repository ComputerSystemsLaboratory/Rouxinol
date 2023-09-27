#include <iostream>
using namespace std;

int main(){
	int k[500];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		 cin >> k[i];
	}
    for(int i = 1; i <= n; i++){
        cout << "node " << i;
        cout << ": key = " << k[i];
        if(i > 1){
            cout << ", parent key = " << k[i/2];
        }
        if(2*i <= n){
            cout << ", left key = " << k[2*i];
        }
        if(2*i+1 <= n){
            cout << ", right key = " << k[2*i+1];
        }
        cout << ", " << endl;
    }
}