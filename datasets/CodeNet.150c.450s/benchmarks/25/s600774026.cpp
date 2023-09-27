#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<int> alphabet(26,0);
    string S;

    while(cin >> S){
        for(int i=0; i<S.size(); i++){
            if(S[i] - 'a' >= 0 && S[i] - 'a' < 26){
                alphabet[S[i] - 'a']++;
            }
            if(S[i] - 'A' >= 0 && S[i] - 'A' < 26){
                alphabet[S[i] - 'A']++;
            }
        }
    }

    string aa = "abcdefghijklmnopqrstuvwxyz";

    for(int i=0; i<26; i++){
        cout << aa[i] << " : " << alphabet[i] << endl;
    }
    


    return 0;
}