#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <set>

using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = 0 ; i < a ; i ++)
#define vi vector<int>

#define M 1046527
#define L 14

char H[M][L];
int getChar(char ch){
	if(ch == 'A')return 1;
	else if(ch == 'C')return 2;
	else if(ch == 'G')return 3;
	else if(ch == 'T')return 4;
	else return 0;
}
long long getKey(string s){
	long long ret = 0,p = 1;
	rep(i,s.size()){
		ret += p * getChar(s[i]);
		p *= 5;
	}
	return ret;
}

int h1(int key){return key % M;};
int h2(int key){return 1 + (key % (M - 1));}

int find(string str){
	long long key, h,i=0;
	key = getKey(str);
	while(true){
		h = (h1(key) + i * h2(key)) % M;
		if(str == H[h])return 1;
		else if(H[h][0] == '\0')return 0;
		i ++;
	}
	return 0;
}

int insert(string str){
	long long key, h, i=0;
	key = getKey(str);
	while(true){
		h = (h1(key) + i * h2(key)) % M;
		if(H[h] == str)return 1;
		else if(H[h][0] == '\0'){
			rep(j,str.size())
				H[h][j] = str[j];
			return 0;
		}
		i ++;
	}
	return 0;
}

int main(void){
	int n, h;
	string str, com;

	rep(i,M)H[i][0] = '\0';

	cin>>n;
	rep(i,n){
		cin>>com>>str;
		if(com =="insert"){
			insert(str);
		}else{
			if(find(str)){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
	}
}