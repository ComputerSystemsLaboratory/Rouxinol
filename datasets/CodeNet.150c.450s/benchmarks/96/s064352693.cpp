#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

vector<string> ans;
string bot[10] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string mess;
		string code;
		cin >> code;
		int count = 0;
		for(int j = 0;j < code.size();j++){
			if(code[j] == '0'){
				if(j == 0 || count == 0) continue;
				int num = 1;
				for(int k = 1;k <= 9;k++){
					if(('0' + k) == code[j-1]){num = k; break;}
				}
				int roop = bot[num].size();
				mess += bot[num][(count - 1)% roop];
				count = 0;
			}else{
				count++;
			}
		}
		ans.push_back(mess);
	}
	
	for(int i = 0;i < n;i++){
		cout << ans[i] << endl;
	}
	return 0;
}