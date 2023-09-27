#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <string>
#include <algorithm>
using namespace std;

int main(){
string data;
string d;
int m;
int h[100];

while(1){

cin >> data >> m;
if(data == "-")break;

for(int i = 0; i < m; i++){
  cin >> h[i];
  d = data.substr(0, h[i]);
  data.insert( data.length(), d );  
  data.erase(0, h[i]);
}
cout << data <<endl;
data.clear();
}
return 0;
}
