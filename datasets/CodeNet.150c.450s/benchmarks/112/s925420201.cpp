#include<iostream>

 using namespace std;

 int main(){
while(1){

 int a, mozi;
 cin >> a ;
    if(a==0)break;
 char wrong[a], right[a];
 for(int i=0; i < a; i++){
 cin >> wrong[i] >> right[i];
 }
 cin >> mozi;
 char mozire[mozi];
 for(int j=0; j < mozi; j++){
 cin >> mozire[j];
 for(int f=0; f < a; f++){
 if(mozire[j] == wrong[f]){
 mozire[j] = right[f];
 break;}}
 }
 for(int e = 0; e < mozi; e++)
 cout << mozire[e];
cout << endl;
}
 return 0;
 }