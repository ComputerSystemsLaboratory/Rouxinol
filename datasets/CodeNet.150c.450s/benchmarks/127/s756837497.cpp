#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

string Reverse(char* str, int pos, int check)
{
	char res[73]= {};

	if(check == 1)
		for(int i= 0; i <= pos; i++)
			res[i]= str[i];
	else if(check == 0 || check == 2)
		for(int i= 0; i <= pos; i++)
			res[i]= str[pos-i];

	if(check == 0)
		for(int i= pos+1; i < strlen(str); i++)
			res[i]= str[i];
	else if(check == 1 || check == 2)
		for(int i= pos+1; i < strlen(str); i++)
			res[i]= str[strlen(str)-(i-pos)];

	if(check == 3 || check == 6)
		for(int i= pos+1; i < strlen(str); i++)
			res[i-pos-1]= str[i];
	else if(check == 4 || check == 5)
		for(int i= pos+1; i < strlen(str); i++)
			res[i-pos-1]= str[strlen(str)-(i-pos)];

	if(check == 4 || check == 6)
		for(int i= 0; i <= pos; i++)
			res[strlen(str)-pos-1+i]= str[i];
	else if(check == 3 || check == 5)
		for(int i= 0; i <= pos; i++)
			res[strlen(str)-pos-1+i]= str[pos-i];

	string ret= res;
	return ret;
}

long long int CountRes(vector<pair<string, bool> > res, long long int num)
{
	long long int count= 0;
	for(int i= 0; i < num; i++)
		if(res[i].second == true)
		{
			count++;

			for(int j= i+1; j < num; j++)
				if(!res[i].first.compare(res[j].first))
					res[j].second= false;
		}

	return count;
}

int main(void)
{
	int num;
	cin>>num;

	for(int i= 0; i < num; i++)
	{
		char str[73]= {};
		cin>>str;

		vector<pair<string, bool> > res(200000);
		for(long long int j= 0; j < 200000; j++)
			res[j].second= true;

		long long int idx= 0;
		for(int j= 0; j< strlen(str)-1; j++)
			for(int k= 0; k < 7; k++)
				res[idx++].first= Reverse(str, j,  k);

		cout<<CountRes(res, idx)<<endl;
	}

	return 0;
}