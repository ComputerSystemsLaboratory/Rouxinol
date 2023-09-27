#include <bits/stdc++.h>
using namespace std;

int counter[26];
int main(int argc, const char * argv[]) {
    // insert code here...
    char ch;
    int num;
    while ( cin >> ch ){
        // ここで ch がアルファベットなら、数える
        if('a'<=ch&&ch<='z'){
            num = ch-'a';
            counter[num]++;
            
        }else if('A'<=ch&&ch<='Z'){
            num=ch-'A';
            counter[num]++;
        }

        
    }
    
    for (int i=0; i<26; i++) {
       char a='a';
        printf("%c", a + i);
        cout<<" : "<<counter[i]<<endl;
    }
    return 0;
}

