#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int a;
	bool f1, f2,f3;
	int count;
	string x;
	while (1){
		cin >> a;
		if (!a){
			break;
		}
		count = 0;
		f1 = 0;
		f2 = 0;
		f3 = 0;
		for (size_t i = 0; i < a; i++)
		{
			cin >> x;
			if (x == "lu"){
				if (f2 == 1&&f3==0){
					count++;
					f3 = 1;
				}
				f1 = 1;
			}
			else if (x == "ru"){
				if (f1 == 1&&f3==0){
					count++;
					f3 = 1;
				}
				f2 = 1;
			}
			else if(x=="ld"){
				if (f2 == 0&&f3==1){
					count++;
					f3 = 0;
				}
				f1 = 0;
			}
			else if (x == "rd"){
				if (f1 == 0&&f3==1){
					count++;
					f3 = 0;
				}
				f2 = 0;
			}
		}
		cout << count << endl;
	}
	return 0;
}