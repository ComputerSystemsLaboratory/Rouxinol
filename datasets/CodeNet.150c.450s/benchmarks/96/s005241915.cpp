#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n;
	const char b[9][5] = { {'.',',','!','?',' '}, {'a','b','c'}, {'d','e','f'},
							{'g','h','i'}, {'j','k','l'}, {'m','n','o'},
							{'p','q','r','s'}, {'t','u','v'}, {'w','x','y','z'} };
	const int a[] = {5,3,3,3,3,3,4,3,4};
	cin >> n;
	for(int i=0;i<n;++i){
		string buf;
		cin >> buf;
		int c,j=0;
		bool f = false;
		int cnt = 0;
		while((c=buf[j++])!='\0'){
			c -= '0';
			int tmp;
			if(c==0){
				if(f){
					cout << b[tmp-1][--cnt%a[tmp-1]];
					cnt=0;
					f=false;
				}
			}else{
				tmp=c; cnt++; f=true;
			}
		}
		cout << endl;
	}
	return 0;
}