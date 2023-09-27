#include<string>
#include<iostream>
using namespace std;


int main() {
    // insert code here...
    char ch;
    while (true) {
        scanf("%c", &ch);
        if (ch=='\n') {
            cout<<endl;
            break;
        }
        if('a'<=ch&&ch<='z')ch-=32;
        else if('A'<=ch&&ch<='Z')ch+=32;
        printf("%c",ch);
        
    }

    
    return 0;
}
