#include <iostream>
#include <string>
using namespace std;
int main(){
	string list[] = {
		"",".,!? ","abc","def"
		,"ghi","jkl","mno"
		,"pqrs","tuv","wxyz"
	};
	string str,out;
	int times;
	cin >> times;
	for(int i =0 ;i<times;i++){
		cin >> str;
		char cur,cash='a';
		int count = 0,idx=0;
		int n = 0;
		while(n <str.size()){
			cur = str[n];

			if(cur == '0'){
					if (idx == 0) count = 0;
					else {
						out +=list[idx][count%=list[idx].size()];
						count =0;
						idx=0;
					}
			}
			else if(cur ==cash){
				count +=1;
			}
			else{
				idx= (int)(cur - '0');
			}
			cash = cur;
			n++;
		}//?????????????????°???????????????
		cout << out << endl;
		out ="";
	}
		return 0;
}