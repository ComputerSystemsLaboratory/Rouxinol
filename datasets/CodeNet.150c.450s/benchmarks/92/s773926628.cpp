#include<iostream>
using namespace std;

int main(){
int i = 0;
for(i = 1;i <= 200;i++){
int a = -1;int b = -1;
cin >> a >> b;
if(a < 0){
break;
}
else if(a + b < 10){
cout << 1 << endl;
}
else if(a + b < 100){
cout << 2 << endl;
}
else if(a + b < 1000){
cout << 3 << endl;
}
else if(a + b < 10000){
cout << 4 << endl;
}
else if(a + b < 100000){
cout << 5 << endl;
}
else if(a + b < 1000000){
cout << 6 << endl;
}
else {
cout << 7 << endl;
}
}
    return 0;
}