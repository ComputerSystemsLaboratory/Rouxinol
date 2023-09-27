#include<iostream>
using namespace std;
int main(){
int n,num;
string mar;
int cards[4][14];
for(int i=0; i<4; i++){
for(int j=1; j<14; j++){
cards[i][j]=0;
}
}
cin >> n;
for(int i=0; i<n; i++){
cin >> mar >> num;
if(mar=="S") cards[0][num]=1;
else if(mar=="H") cards[1][num]=1;
else if(mar=="C") cards[2][num]=1;
else if(mar=="D") cards[3][num]=1;
}
for(int i=0; i<4; i++){
for(int j=1; j<14; j++){
if(cards[i][j]==0){
if(i==0) cout << "S " << j <<endl;
else if(i==1) cout << "H " << j <<endl;
else if(i==2) cout << "C " << j <<endl;
else if(i==3) cout << "D " << j <<endl;
}
}
}
return 0;
}
