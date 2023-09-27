#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int getChar(char ch);
long long getKey(char str[]);
int h1(int key);
int h2(int key);
int h(int key,int i);
void insert(int key);
int serch(int key);

const int m = 1000003;
int *T;

int main(){
	T = new int[m]; for(int i=0;i<m;i++) T[i] = -1;
	int n; cin>>n;
	string command;
	char str[12];

	for(int i=0;i<n;i++){
		cin>>command;
		if(command=="insert"){
			cin>>str; insert(getKey(str));
		}else if(command=="find"){
			cin>>str;
			if(serch(getKey(str))!=-1)
				cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}

	delete [] T;
}

int getChar(char ch){
	if(ch=='A') return 1;
	else if(ch=='C') return 2;
	else if(ch=='G') return 3;
	else if(ch=='T') return 4;
	else return 0;
}

long long getKey(char str[]){
	long long sum = 0, p = 1;
	for(int i=0;i<strlen(str);i++){
		sum += p*(getChar(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key){
	return key%m;
}

int h2(int key){
	return 1+key%(m-1);
}

int h(int key,int i){
	return (h1(key)+i*h2(key))%m;
}

void insert(int key){
	int i=0;
	while(true){
		int j = h(key,i);
		if(T[j]==-1){
			T[j] = key;
			return ;
		}else
			i++;
	}
}

int serch(int key){
	int i=0;
	while(true){
		int j = h(key,i);
		if(T[j]==key)
			return j;
		else if(T[j]==-1 || i>=m)
			return -1;
		else
			i++;
	}
}