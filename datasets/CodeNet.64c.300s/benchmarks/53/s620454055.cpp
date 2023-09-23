#include<iostream>
#include<cmath>

using namespace std;

int main(){

int a=0,b=0,c=0,t=0;
int x;

cin >> a >> b >> c;

for(x=a ; x<=b ; x++){

if(c%x==0){

t++;
}

}

cout << t << endl;

return 0;

}