#include<iostream>
#include<string>
using namespace std;

int main(){
	string inp;
	cin >> inp;
	int inp_size = inp.size();
	int hight[20000] = {0};
	int area[10000] = {0};
	for (int i = 0; i < inp_size; i++){
		if (inp[i] == '/'){
			hight[i+1] = hight[i] + 1;
		}
		else if (inp[i] == '_'){
			hight[i+1] = hight[i];
		}
		else {
			hight[i+1] = hight[i] - 1;
		}
	}

	// calc areas
	int x = inp_size;
	int num = 0;
	int sum = 0;
	while(x > 0){
		if (hight[x] > hight[x-1]){
			int y = x;
			for (int j = x-1; j >= 0; j--){
				if (hight[x] == hight[j]) {
					y = j;
					// calc area
					for (int i = y; i < x; i++){
						if (hight[i] > hight[i+1]){
							area[num] += (hight[y] - hight[i+1] - 1) * 2 + 1;
						}
						else if  (hight[i] == hight[i+1]){
							area[num] += hight[y] - hight[i+1];
						}
					}
					sum += area[num];
					num++;
					x = y;
					break;
				}
				if (j == 0) x--;
			}
		}
		else {
			x--;
		}
	}
	cout << sum << endl;
	cout << num;
	for (int i = num-1; i >= 0; i--) cout << " " << area[i];
	cout << endl;
}
