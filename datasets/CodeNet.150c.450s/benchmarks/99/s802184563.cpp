/*** Numeral System ***/

#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int num(string s){
	int i=0, ans=0;
	map<char, int> ctoi;
	ctoi['m']=1000;
	ctoi['c']=100;
	ctoi['x']=10;
	ctoi['i']=1;
	
	while(i<s.size()){
		int a=1;
		if(isdigit(s[i])){
			a=s[i]-'0';
			i++;
		}
		ans+=a*ctoi[s[i]]; //check(s[i]);
		i++;
	}
	
	return ans;
}

void print_mcxi(int val){
	int x=1000;
	map<int, char> itoc;
	itoc[1000]='m';
	itoc[100] ='c';
	itoc[10]  ='x';
	itoc[1]   ='i';
	
	while(x>0){
		if(val/x>1) cout << val/x << itoc[x];
		else if(val/x==1) cout << itoc[x];
		val%=x;
		x/=10;
		
	}
	cout << endl;
	return;
}

int main(){
	int n;
	
	cin >> n;
	REP(i, 0, n){
		int sum;
		string str1, str2;
		cin >> str1 >> str2;
		
		sum=num(str1)+num(str2);
		
		print_mcxi(sum);
		
	}
	
	return 0;
}