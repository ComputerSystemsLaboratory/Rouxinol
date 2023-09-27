#include<iostream>
using namespace std;

int main(){
    int a, b, c,count = 0;
    
    cin >> a >> b >> c;
for(; a < b + 1; a++){
    if(c % a == 0) count++;
}
cout << count << endl;
}
