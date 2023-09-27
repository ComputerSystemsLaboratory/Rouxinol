#include <iostream>
#include <string>
using namespace std;

int main() {
	int w, n, x, y;
	string str;
	cin >> w >> n;
	int a[31];
	for (int i = 0; i <= w; i++) {
		a[i] = i;
	}														//1 = 49
	for (int i = 0; i < n; i++) {
		cin >> str;
		x = stoi(str);
		if (to_string(x).size()==1&&str.size()==3){
			int temp = str[2];
			y = temp-48;
		}
		else if(to_string(x).size()==2&&str.size()==4){
			int temp = str[3];
			y = temp - 48;
		}
		else if(to_string(x).size()==1&&str.size()==4){
			int juunokurai = str[2];
			int itinokurai = str[3];
			y = (juunokurai - 48) * 10 + (itinokurai - 48);
		}
		else {
			int juunokurai = str[3];
			int itinokurai = str[4];
			y = (juunokurai - 48) * 10 + (itinokurai - 48);
		}
		int tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
	}
	for (int i = 1; i <= w; i++) {
		cout << a[i] << endl;
	}
	return 0;
}