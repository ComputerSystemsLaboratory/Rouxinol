#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
	int n;
	cin >> n;
	string s_hanako, s_taro;
	int p_hanako = 0;
	int p_taro = 0;
	for(int i = 0; i < n; i++){
		cin >> s_taro >> s_hanako;
		if (s_taro == s_hanako){
			p_hanako += 1;
			p_taro += 1;
		} else if (s_taro < s_hanako) {
			p_hanako += 3;
		} else if (s_taro > s_hanako) {
			p_taro += 3;
		}
	}
	cout << p_taro << " " << p_hanako << endl;
	return 0;
}