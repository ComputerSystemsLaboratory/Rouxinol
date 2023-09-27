#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int NumStr(string str)
{
		int n = str.size();
	int sum = 0;
	for(int i=0; i<n; i++){
		if(str[i] == 'A')sum += (pow(4.,i) * 1);
		else if(str[i] == 'C')sum += (pow(4.,i) * 2);
		else if(str[i] == 'G')sum += (pow(4.,i) * 3);
		else if(str[i] == 'T')sum += (pow(4.,i) * 4);
	}
	return sum;
}

void InsertFlag(vector<bool> &flag,string str)
{
	int num_str = NumStr(str);
	flag[num_str] = true;
}

void FindFlag(const vector<bool> &flag,string str)
{
	int num_str = NumStr(str);
	if(flag[num_str] == true)cout << "yes" << endl;
	else if(flag[num_str] == false)cout << "no" << endl;
}

int main()
{
	int n;
	cin >> n;
	vector<bool> flag;
	flag.resize(16777216);

	for(int i=0; i<n; i++){
		string command, str;
		cin >> command >> str;
		if(command == "insert")InsertFlag(flag, str);
		else if(command == "find")FindFlag(flag, str);
	}
}