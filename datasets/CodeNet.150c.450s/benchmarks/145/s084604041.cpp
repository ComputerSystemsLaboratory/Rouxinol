/*AOJ 0029*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

	vector<string> data;

	char str[35];

	while(cin>>str){
		data.push_back(str);
	}

	int max=0;
	int max1 = 0;
	int maxNum = 0;
	int maxNum1 = 0;
	int sum=0;

	for(int i=0;i<data.size();i++){
		sum = 0;
		for(int j=i+1;j<data.size();j++){
			if(data.at(i) == data.at(j)){
				sum++;
			}
		}
		if(max<=sum){
			max = sum;
			maxNum = i;
		}
	}

	max1 = 0;
	maxNum1 = 0;

	for(int i=0;i<data.size();i++){
		if(max1 <= data.at(i).size()){
			max1 = data.at(i).size();
			maxNum1 = i;
		}
	}



	cout<<data.at(maxNum)<<" "<<data.at(maxNum1)<<endl;

	return 0;
}