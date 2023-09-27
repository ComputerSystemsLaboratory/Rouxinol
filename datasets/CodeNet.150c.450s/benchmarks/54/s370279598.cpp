#include <bits/stdc++.h>
using namespace std;

int main() {
    // insert code here...
    string word, sentence;
    cin>>word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    int c=0;
    
    while(true){
        cin>>sentence;
        if(sentence=="END_OF_TEXT")break;
        transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
        if (word==sentence) {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
