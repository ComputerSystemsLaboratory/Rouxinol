#include<iostream>
#include<string>
using namespace std;



int main()
{
	int taro = 0, hanako = 0, n;
	string taros, hanakos;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> taros >> hanakos;
		if (taros > hanakos){
			taro += 3;
		}
		else if (taros < hanakos){
			hanako += 3;
		}
		else{
			taro++;
			hanako++;
		}
	}
	cout << taro << " " << hanako << endl;
	return 0;
}