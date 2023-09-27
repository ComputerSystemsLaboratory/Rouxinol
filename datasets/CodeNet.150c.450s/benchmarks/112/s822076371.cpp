#include <iostream>
#include <string>
using namespace std;
 
int main() {
while(1){
int a;
cin >> a;
if(a == 0){break;}
char *b = new char [a];
char *c = new char [a];
for(int i = 0;i < a;i++){
cin >> b[i] >> c[i];
}
int m;
cin >> m;
for(int i = 1;i <= m;i++){
char p;
cin >> p;
int ii = 0;
while(ii < a){
if(p == b[ii]){
p = c[ii];
break;
}
ii++;
}
if(i == m){cout << p << endl;}
else{cout << p;}
}
 
 
}
	return 0;
}