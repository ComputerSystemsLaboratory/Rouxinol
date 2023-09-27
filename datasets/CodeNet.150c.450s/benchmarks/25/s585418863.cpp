#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int alphabet = 26;
//---------------------------------------
void count(string str, vector<int>& table);   //??¢???????????????????????°?????°??????
void output(vector<int> table);  //??¨???
//---------------------------------------

int main(void)
{
	string str;  
	vector<int> table(alphabet, 0);
	
	while(getline(cin, str)){  //??????
		count(str, table);
	}
	output(table);
	
	return 0;
}

//------------------------------------------
void count(string str, vector<int>& table)
{
	
	
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z') {
			int table_num = str[i] - 'A';
			table[table_num] += 1;
		}
		else if(str[i] >= 'a' && str[i] <= 'z'){
			int table_num = str[i] - 'a';
			table[table_num] += 1;
		}
	}
}
//------------------------------------------
void output(vector<int> table)
{	
	for(int i = 0; i < 26; i++){
		char alp = 'a' + i;
		cout << alp << " : "
		     	<< table[i] << endl;
	}
}