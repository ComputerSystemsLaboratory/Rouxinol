#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string str, order, p, print_str;
	//string::iterator str_bgn = str.begin();
	int ordr_num, start, end;
	cin >> str;
	cin >> ordr_num;
	for(int i=0;i<ordr_num;i++){
		cin>>order;
		if(order == "replace"){
			cin >> start >> end >> p;
			str.erase(start, end - start + 1);
			str.insert(start, p, 0, end - start + 1);
		}else if(order == "reverse"){
			cin >> start >> end;
			reverse(str.begin()+start, str.begin()+end+1);
		}else if(order == "print"){
			cin >> start >> end;
			print_str = str.substr(start, end - start + 1);
			cout << print_str << endl;
		}
	}
	return 0;
}