#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

	int n;
	cin >> n;

	int hanako = 0;
	int taro = 0;
	for(int i=0;i<n;i++) {

		string str1, str2;
		cin >> str1 >> str2;

        if(str1.compare(str2) == 0){
                hanako++;
                taro++;
        }
        else if(str1.compare(str2) < 0) taro += 3;
        else hanako += 3;
	}

	cout << hanako << " " << taro << endl;

    return 0;
}