#include<iostream>
#include<string>
using namespace std;
int main(){
   string line,str1,str2;
   int m;

   while(cin >> line , line != "-"){
	cin >> m;
	int h[m];

	for(int i=0; i<m; i++){
		cin >> h[i];
		str1 = line.substr(0,h[i]);
		str2 = line.substr(h[i],line.size());
		line = str2 + str1;
	}

	cout << line << endl;
   }

   return 0;

}