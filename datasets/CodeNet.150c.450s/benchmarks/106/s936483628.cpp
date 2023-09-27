#include <iostream>
using namespace std;

int main(){
int a,b,c,d,e=0;

cin >> a >> b >> c;

for(int i = a;  i <= b; i++){
d = c/i;
if(d*i == c){
e++;
}
}
cout << e << endl;
}
