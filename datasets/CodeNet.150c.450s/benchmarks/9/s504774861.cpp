#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
     string word;
     int count, index;

     while(true) {
         cin >> word;
         if (word == "-") {
             break;
         }
         cin >> count;

         for (int i = 0; i < count; i++) {
            cin >> index;
            word = word.substr(index, word.size() - index) + word.substr(0, index);
         }

         cout << word << endl;
     }
}