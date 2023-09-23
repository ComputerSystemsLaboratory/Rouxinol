#include <iostream>
using namespace std;

int K(int a){
int p = 0;
if(a >= 500){
a = a-500;
p = p+1;
}
while(a>=100){
a = a-100;
p = p+1;
}
if(a >= 50){
a = a-50;
p = p+1;
}
while(a>=10){
a = a-10;
p = p+1;
}
if(a >= 5){
a = a-5;
p =p+1;
}
p = p+a;
return p;
}
int main() {
while(1){
int buy = 0;int maisuu = 0;
cin >> buy;
if(buy == 0){break;}
buy = 1000 - buy;
cout <<  K(buy) << endl;
}
	return 0;
}