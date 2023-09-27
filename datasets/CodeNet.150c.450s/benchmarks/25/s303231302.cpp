//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_C
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    std::array<int, 26> counter;
    for(int i=0; i<26; i++){
        counter[i] = 0;
    }
    //couter????????????

    char ch;
    while(cin >> ch){

        int num = tolower(ch) - 'a';
        counter[num]++;
    }

    int num = 'a';
    for(int i=0; i<26; i++){
        cout << (char)(num+i) << " : " << counter[i] << endl;
    }
    return 0;
}