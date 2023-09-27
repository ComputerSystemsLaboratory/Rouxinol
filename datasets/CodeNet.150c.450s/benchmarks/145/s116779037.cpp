#include<iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
	string sentence[1000];
	int sentenceNum[1000];
	int array[1000];
	string input;
	int count = 0;
	bool flag;
	int maxLength = 0;

	for(int i=0; i < 1000; i++) sentenceNum[i] = 0;

	while(cin >> input){
		flag = false;
		if(!count){
			sentence[0] = input;
			sentenceNum[0]++;
			count++;
			int inputSize = input.size();
			maxLength = max(maxLength, inputSize);
		}

		else {
			for(int i=0; i < count; i++){
				if(sentence[i] == input){
					sentenceNum[i]++;
					flag = true;
					break;
				}
			}
			if(!flag){
				sentence[count] = input;
				sentenceNum[count]++;
				count++;
				int inputSize = input.size();
				maxLength = max(maxLength, inputSize);
			}
		}
	}

	for(int i=0; i < 1000; i++) array[i] = sentenceNum[i];

	sort(array, array+1000, greater<int>());

	for(int i=0; i< count; i++){
		if(array[0] == sentenceNum[i]){
			cout << sentence[i];
		}
	}
	for(int i=0; i< count; i++){
		int sentenceSize = sentence[i].size();
		if(maxLength == sentenceSize){
			cout << " " << sentence[i] << endl;
		}
	}
}