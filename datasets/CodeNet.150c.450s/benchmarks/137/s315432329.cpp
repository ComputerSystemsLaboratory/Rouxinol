#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int NumStr(const string &str)
{
	int n = str.size();
	int sum = 0;
	for(int i=0; i<n; i++){
		if(str[i] == 'A')sum += 1;
		else if(str[i] == 'C')sum += 2;
		else if(str[i] == 'G')sum += 3;
		else if(str[i] == 'T')sum += 4;
		sum *= 4;
	}
	return sum;
}

void InsertFlag(vector<bool> &flag, const string &str)
{
	int num_str = NumStr(str);
	flag[num_str] = true;
}
void FindFlag(vector<bool> &flag, const string &str)
{
	int num_str = NumStr(str);
	if(flag[num_str] == true)cout << "yes" << endl;
	else if(flag[num_str] == false)cout << "no" << endl;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
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