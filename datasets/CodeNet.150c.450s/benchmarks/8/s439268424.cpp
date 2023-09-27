#include <string>
#include <iostream>
using namespace std;

int main(){
	int n, t_score=0, h_score=0;
	string taro, hanako;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> taro >> hanako;
	
		if(taro > hanako){
			 t_score += 3;
		} else if(taro == hanako) {
			t_score += 1; h_score+=1;
		} else if(taro < hanako){
			h_score += 3;
		}
	}
	cout << t_score << " " << h_score << endl;
	return 0;
}