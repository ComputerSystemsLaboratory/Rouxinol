#include<iostream>
#include<utility>
using namespace std;

int main(){
	int a[100];
	int i = 0;
	while (cin >> a[i]){
		if (a[i] == 0){
			int j = i;
			while (1){
				j--;
				if (a[j] != 0){
					cout << a[j] << endl;
					a[j] = 0;
					break;
				}
			}
		}
		i++;
	}
	
	return 0;
}
