#include <iostream>
#include <cctype>
using namespace std;

int main(void){
    int count[26] = {0};
    char c;
    while(cin.get(c)){
        c = tolower(c);
        count[static_cast<int>(c - 'a')]++;
    }
    
    int i;
    for(i = 0; i < 26; i++){
        cout << static_cast<char>(i + 'a') << " : " << count[i] << endl;
    }
    
    return 0;
}