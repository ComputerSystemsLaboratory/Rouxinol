#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string btn[] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	
	for(int k=0; k<n; ++k){
		
		string str, res="";
		cin >> str;
		int curr = 0;
		int ptr = -1, tmp;
		
		for(int i=0; i<str.size(); ++i){
			
			tmp = (int)(str[i]-'0');
			
			if(tmp==0){
				if(curr !=0)
					res += btn[curr][ptr];
				
				curr=0;
				ptr=-1;
				continue;
			}
			
			curr = tmp;
			ptr = (ptr+1)%btn[curr].size();
		}
		
		cout << res << endl;
	}

	return 0;
}