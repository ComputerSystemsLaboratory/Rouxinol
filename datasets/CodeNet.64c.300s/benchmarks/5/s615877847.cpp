#include<iostream>
#include<utility>
#include<climits>
using namespace std;

int main(){
	
	int height[10] = {};

	for(int i = 0; i < 10; i++){
		cin >> height[i];
	}

	int f = INT_MIN, s = INT_MIN, t = INT_MIN;

	for (int i = 0; i < 10; i++){
		if (height[i] >= t){
			t = height[i];
		}
		if (t >= s){
			swap(s, t);
		}
		if (s >= f){
		swap(f,s);
		}
	}
    
	cout << f << "\n" << s << "\n" << t << endl;

		return 0;
}