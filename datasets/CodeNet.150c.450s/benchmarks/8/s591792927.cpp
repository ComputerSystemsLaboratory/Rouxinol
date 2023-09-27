#include<iostream>
#include<string>
using namespace std;

int main() {
	int n,t_point,h_point;
	string t_card;
	string h_card;
	t_point = 0;
	h_point = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> t_card;
		cin >> h_card;
		if(t_card > h_card){
			t_point += 3;
		}else if(t_card < h_card){
			h_point += 3;
		}else{
			t_point++;
			h_point++;
		}
	}
	cout << t_point << " " << h_point << endl;
	return 0;
}
