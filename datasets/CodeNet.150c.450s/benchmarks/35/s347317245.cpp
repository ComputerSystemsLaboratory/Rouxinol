#include<iostream>

using namespace std;

int main(){

int n;
int a[10000];
long long int ans;

while(true){

cin >> n;

if(n == 0) break;

for(int i = 0; i < n; i++){

cin >> a[i];

}

ans = -1000000000;
long long int sum;

for(int i = 0; i < n; i++){
sum = 0;
for(int j = i; j < n; j++){
sum += a[j];
if(sum > ans){
ans = sum;
}
}
}

cout << ans << endl;

}

return 0;

}