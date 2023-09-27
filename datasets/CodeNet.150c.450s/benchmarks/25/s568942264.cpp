#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int count[26] = {0};
    while(cin >> ch){
        if(islower(ch)){
            count[ch -'a']++;
        } else if(isupper(ch)){
            count[ch -'A']++;
        }
    }
    for(int i = 0;i < 26;i++){
        cout << char(i +'a') << " : " << count[i] << endl;
    }
    return 0;
}