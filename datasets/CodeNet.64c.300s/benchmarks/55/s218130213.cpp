#include<iostream>
using namespace std;

int main(){
int num[10000];
for(int i=0;i<10000;i++){
cin >> num[i];
if(num[i]==0) break;
}
for(int j=0;j<10000;j++){
if(num[j] == 0) break;
cout << "Case " << j+1 << ": " << num[j] << endl;
}
return 0;
}