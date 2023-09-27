#include<iostream>
#include<cctype>

using namespace std;

int main() {
    char ch;
    int count [26] = {0}, i;
    while(1){
        cin >> ch;

        if(cin.eof()) break;

        if(islower(ch)) {
            ch = ch - 'a';
            count[ch]++;
        }

        else if (isupper(ch)) {
            ch = ch - 'A';
            count[ch]++;
        }

    }
    for(i=0;i<26;i++)
        cout << (char)(i + 'a') << " : " << count[i] << endl;
    
}