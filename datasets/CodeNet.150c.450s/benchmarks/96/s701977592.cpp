#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	string str;
	char m[10000],a[10000],p,c[10000];
	char b[10][5]={{'-','-','-','-','-'},{'.',',','!','?',' '},{'a','b','c','-','-'},{'d','e','f','-','-'},{'g','h','i','-','-'},{'j','k','l','-','-'},{'m','n','o','-','-'},{'p','q','r','s','-'},{'t','u','v','-','-'},{'w','x','y','z','-'}};
	int n;
	int d=-1;
	int e=0;
	int j;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		p=0;
		j=0;
		d=-1;
		e=0;
		for(int i=0;i<str.size();i++){
			if(i==0){
				d=0;
				e=str[i]-'0';
			}
			else if(str[i-1]!=str[i]){
				if(str[i-1]!='0'){
					c[j]=b[e][d];
					j++;
				}
				d=0;
				e=str[i]-'0';
			}
			else{
				d++;
				if(b[e][d]=='-' || d==5){
					d=0;
				}
			}
		}
		for(int i=0;i<j;i++){
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
}