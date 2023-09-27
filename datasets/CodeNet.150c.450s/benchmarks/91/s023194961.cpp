#include <iostream>
#include <math.h>
#define N 1000000
using namespace std;


bool sosu_hantei(int num){
int i;
for(i=2;i<=sqrt((double)num);i++){
if(num%i==0)return false;
}

if(num==4)return false;

return true;

}

int main(){
int n,i,count=0;
bool sosu[N];

for(i=0;i<N;i++){

sosu[i]=sosu_hantei(i);
}

while(cin >> n){

for(i=2;i<=n;i++){
if(sosu[i]){ 
count++;
}
}

cout << count << endl;
i=2;count=0;
}

}