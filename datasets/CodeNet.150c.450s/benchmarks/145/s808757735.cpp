#include <iostream>
#include <string>
using namespace std;

int main(){
	string in[1001];
	int num[1001], i=0, max=0, lon=0, ansa, ansb;

	for(int i=0;i<1001;i++){
		num[i] = 0;
	}

	while (true)
	{
		cin >> in[i];
		if (cin.eof()||in[i] == "0") { break; }
		for(int j=0;j<i;j++){
			if(in[i] == in[j]){
				num[j]++;
				continue;
			}
		}
		i++;
	}
	for(int j=0;j<i;j++){
		if (max < num[j]) {
			max = num[j];
			ansa = j;
		}
		if (lon < in[j].size()) {
			lon = in[j].size();
			ansb = j;
		}
	}
	cout << in[ansa] << " " << in[ansb] << endl;
	return 0;
}