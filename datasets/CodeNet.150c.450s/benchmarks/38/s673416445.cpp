#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int N;
cin >> N;
while(N--){
int i[3],c;
int max;
cin >> i[0] >> i[1] >> i[2];
sort(i,i+3);
cout << ((i[0]*i[0]+i[1]*i[1]==i[2]*i[2])?"YES\n":"NO\n");
}}