#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
     string str;
     int q;
     cin >> str >> q;
     for (int i = 0; i < q; i++) {
         string cmd, repStr;
         int from, to;
         cin >> cmd >> from >> to;

         if (cmd == "print") {
             cout << str.substr(from, to - from + 1) << endl;
         }
         if (cmd == "replace") {
             cin >> repStr;
             str.replace(from, to - from + 1, repStr); 
         }
         if (cmd == "reverse") {
             string reverseStr = "";;
             for (int j = from; j <= to; j++) {
                reverseStr.insert(0, str.substr(j, 1));
             }
             str.replace(from, to - from + 1, reverseStr); 
         }
     }
}