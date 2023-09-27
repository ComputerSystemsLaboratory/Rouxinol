#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,ta=0,ha=0;
	string t , h;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> t >> h;
		if (t>h){
			ta = ta + 3;
		}
		else if (h > t){
			ha = ha + 3;
		}
		else{
			ta++;
			ha++;
		}
	}
	cout << ta << " " << ha << endl;
	return 0;
}