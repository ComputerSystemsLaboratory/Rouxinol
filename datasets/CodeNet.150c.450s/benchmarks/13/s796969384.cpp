#include<bits/stdc++.h>
using namespace std;

string str,value;

int main(){
 cin >> str >> value;
 str = str + str;
 if((int)str.find(value) != -1) cout << "Yes" << "\n";
 else cout << "No" << "\n";
}