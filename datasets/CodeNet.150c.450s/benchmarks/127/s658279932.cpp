#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#define PI 3.1415926535897932
using namespace std;

string data[3000];
int c;

bool search(string);
void input(string);
void swap(char *,char *);

int main(){
	string str;
	string str1,str2; //1gariba-su
	int m;
	cin >> m;
	while(m--){
		c=0;
		cin >> str;
		for(int i=1;i<str.size();i++){	//1bunkatu
			str1.assign(str,0,i);
			str2.assign(str,i,str.size()-i);
			if(search(str1+str2)) input(str1+str2); //12??????
			if(search(str2+str1)) input(str2+str1);	//21??????
			for(int j=0;j<(str1.size())/2;j++) swap(&str1[j],&str1[str1.size()-j-1]);//1?????¢
			if(search(str1+str2)) input(str1+str2); //12??????
			if(search(str2+str1)) input(str2+str1); //21??????
			for(int j=0;j<(str2.size())/2;j++) swap(&str2[j],&str2[str2.size()-j-1]);//2?????¢
			if(search(str1+str2)) input(str1+str2); //12??????
			if(search(str2+str1)) input(str2+str1); //21??????
			for(int j=0;j<(str1.size())/2;j++) swap(&str1[j],&str1[str1.size()-j-1]);//1?????¢
			if(search(str1+str2)) input(str1+str2); //12??????
			if(search(str2+str1)) input(str2+str1); //21??????
		}
		cout << c << endl;
	}
	return 0;
}

bool search(string str){
	for(int i=0;i<c;i++){
		if(str==data[i]) return false;	//??????????????°
	}
	return true;	//??????????????°
}

void input(string str){
	data[c]=str;
	c++;
}

void swap(char *a,char *b){
	char w;
	w=*a;
	*a=*b;
	*b=w;
}