#include<iostream>
using namespace std;
int main(){
int a,b,sum,cnt=1;
while(cin >> a >> b){
sum = a + b;
while(1){
if (sum<10) break;
sum/=10;
cnt++;
}
cout << cnt << endl;
cnt=1;
}
return 0;
}