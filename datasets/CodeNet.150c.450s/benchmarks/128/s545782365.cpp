#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[21];
    cin >> s;
    int l=strlen(s);
    char b[l];
    int a=0;
    for(int i=l-1;i>=0;i--){
        b[a]=s[i];
        a++;
    }
    b[a]='\0';
    cout << b << endl;

    return 0;
}