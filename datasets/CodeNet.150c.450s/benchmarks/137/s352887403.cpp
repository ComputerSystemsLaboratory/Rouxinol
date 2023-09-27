#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<stack>
#include<list>

typedef long long ll;

using namespace std;

char H[1046527][15];

int getCharKey(char a){
	if(a == 'A')
		return 1;
	else if(a == 'C'){
		return 2;
	}
	else if(a == 'G'){
		return 3;
	}
	else if(a == 'T'){
		return 4;
	}
	else
		return 0;
}

ll getKey(char a[]){
	ll sum = 0;
	ll p = 1;
	for(ll i = 0 ; i<strlen(a) ; i++){
		sum += p*getCharKey(a[i]);
		p *=5;
	}
	return sum;
}

int h1(int key){
	return key%1046527;
}
int h2(int key){
	return 1+ (key%1046526);
}

int insert(char a[]){
	ll key = getKey(a);
	for(ll i = 0 ; ; i++){
		ll h = (h1(key) + i*h2(key)) %1046527;
		if(strcmp(H[h] , a) == 0)
			return 1;
		else if(strlen(H[h]) == 0){
			strcpy(H[h] , a);
			return 0;
		}
	}
	return 0;
}

int find(char a[]){
	ll key = getKey(a);
	for(ll i = 0 ; ; i++){
		ll h = (h1(key) + i*h2(key)) %1046527;
		if(strcmp(H[h] , a) == 0)
			return 1;
		else if(strlen(H[h]) == 0)
			return 0;
	}
	return 0; 
}
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i = 0 ; i<n ; i++)
		H[i][0] = '\0';
	
	char a[20] , b[20];
	for(int i = 0 ; i<n ; i++){
		cin>>a>>b;
		if(a[0] == 'i')
			insert(b);
		else{
			if(find(b))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}
	return 0;
}