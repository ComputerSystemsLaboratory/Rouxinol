#include<iostream>
#include<string>

using namespace std;

int main(){

string s;
string p;

cin >> s;
cin >> p;

s += s;


if(s.find(p) != -1){
  cout << "Yes" << endl;
}else if (s.find(p) == -1){
  cout << "No" << endl;
}
return 0;

}