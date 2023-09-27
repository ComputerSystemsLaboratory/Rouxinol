#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <algorithm>
#include <string>	

using namespace std;

int main(){
	int count = 0;
	string w, t;
	cin >> w;
	for (int i = 0; i < w.size(); i++){
		if (65 <= w[i] && w[i] <= 90) w[i] = (char)(w[i] + 32);
	}
	while (1){
		cin >> t;
		if (t == "END_OF_TEXT") break;
		for (int i = 0; i < t.size(); i++){
			if (65 <= t[i] && t[i] <= 90) t[i] = (char)(t[i] + 32);
		}
		if (t == w) count++;
	}
	cout << count << endl;
}