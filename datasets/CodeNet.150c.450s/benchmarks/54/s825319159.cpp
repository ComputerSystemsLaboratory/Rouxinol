#include <iostream>
#include <string>
using namespace std;
int main(){
    int count = 0;
    string word, the;
    cin >> the;
    while(1){
        cin >> word;
        if(word == "END_OF_TEXT") break;
        for(int i=0; i < sizeof(word); i++){
            word[i] = tolower(word[i]);
        }
        if(word == the) count++;

    }
    cout << count << endl;
    return 0;
}