#include<iostream>
#include<string>

using namespace std;

int main(){
	string word[100];
	string most, many;
	int cut[100] = {0}, num = 0, i = 0, j, k = 0, max = 0, max1 = 0;

	while(cin >> word[i]){
		bool flag = 0;

		cut[i] ++;
		if(i == 0) num = word[i].size();
		else{
			if(word[i].size() > num){
				num = word[i].size();
				most = word[i];
			}
		}
		i++;
	}

	for(i = 0; i < num; i ++){
		k = 0;
		for(j = 0; j < num; j ++){
			if(word[i] == word[j]) k ++;
		}
		if(k > max){
			max1 = i;
			max = k;
		}
	}

	cout << word[max1] << " " << most << endl;

	return 0;
}