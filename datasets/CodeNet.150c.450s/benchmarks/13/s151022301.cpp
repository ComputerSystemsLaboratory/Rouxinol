#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

bool judge(string s, string p)//s???p????????????????????????
{	
	int size_s = s.size();
	int size_p = p.size();
	
	for(int i = 0; i < size_s; i++){
		for(int j = 0; j < size_p; j++){
			if(s[i + j] != p[j]){
				break;
			}
			if(j + 1 == size_p){
				return true;
			}
		}
	}
	return false;
}
void print_answer(bool judge)
{
	if(judge == true){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
int main(void)
{
	string s;
	string p;
	
	getline(cin, s);//??????????????????
	getline(cin, p);
	
	s = s + s;
	
	print_answer(judge(s, p));
	
	return 0;
}