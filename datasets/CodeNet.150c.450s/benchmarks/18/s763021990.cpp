#include <iostream>
#include <math.h>
using namespace std;


int main(){

int money=100000;
int i,n;

cin >> n;

for(i=0;i<n;i++){
money*=1.05;

if(money%1000!=0){
money+=1000-(money%1000);
}
}


cout << money << endl;

}