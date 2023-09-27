#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int a, saizu;
	int num[100] = {0}, num2[100] = {0};
	vector<int> array;
	while(cin >> a){
		array.push_back(a);
	}
	saizu = array.size();
	for(int i = 0; i < saizu; i++){
		num2[array[i]-1]++;
		num[array[i]-1]++;
	}
	sort(num,num+saizu);
	for(int i = 0; i < 100; i++){
		if(num2[i] == num[saizu-1]){
			cout << i+1 << endl;
		}
	}
}