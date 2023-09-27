#include <string>
#include <iostream>
using namespace std;

int main(){
	string input;
	cin >> input;
	int n;
	cin >> n;
	string order, replace;
	int a, b;

	for(int i=0; i<n; i++){
		cin >> order;

		if(order == "print"){
				cin >> a >> b;
				for(int s=a; s<=b; s++){
					cout << input[s];
				}
				cout << endl;
		} else if (order == "replace"){
				cin >> a >> b >> replace;
				for(int s=0; s<(b-a+1); s++){
					input[a+s] = replace[s];
				}
		} else if (order == "reverse"){
				cin >> a >> b;
				string temp = input;
				for(int s=0; s<(b-a+1); s++){
					input[a+s] = temp[b-s];
				}
		}

	}

	return 0;
}