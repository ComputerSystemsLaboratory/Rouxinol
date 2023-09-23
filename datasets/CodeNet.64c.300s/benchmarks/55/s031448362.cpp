#include <iostream>
using namespace std;

int main(){
	int data, i;
	i = 0;
	while (cin >> data){
		if (data != 0){
			i++;
			cout << "Case " << i << ": " << data << endl;
		}
		else {
			break;
		}
	}
	return 0;
}