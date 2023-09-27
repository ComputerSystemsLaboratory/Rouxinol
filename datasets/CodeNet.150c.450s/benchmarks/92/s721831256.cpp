#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
 
using namespace std;
 
vector<int> d;
int input1, input2;
int sum;
stringstream ss;
 
int main(){
    
 while(cin >> input1 >> input2) {
     sum=input1+input2;
     ss << sum;
     cout << ss.str().size() << endl;
     ss.str("");
     ss.clear(stringstream::goodbit);
 }
}