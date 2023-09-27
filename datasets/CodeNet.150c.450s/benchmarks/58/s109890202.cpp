#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
	vector<int> NumberRow;
	while(true){
		string in;
		cin >> in;
		if(cin.good() == false){
			break;
		}
		if(in != "+" && in != "-" && in != "*"){
			int Num;
			stringstream ss;
			ss << in;
			ss >> Num;
			NumberRow.push_back(Num);
		}
		int M = NumberRow.size() - 2;
		if(in == "+"){
			int c = NumberRow[M] + NumberRow[M+1];
			NumberRow[M] = c;
			NumberRow.pop_back();
		}else if(in == "-"){
			int c = NumberRow[M] - NumberRow[M+1];
			NumberRow[M] = c;
			NumberRow.pop_back();
		}else if(in == "*"){
			int c = NumberRow[M] * NumberRow[M+1];
			NumberRow[M] = c;
			NumberRow.pop_back();
		}
	}
	cout << NumberRow[0] << endl;
	return 0;
}