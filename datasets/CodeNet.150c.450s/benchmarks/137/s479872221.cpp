#include<iostream>
using namespace std;
#include<string.h>
#include<string>

// study of Hash table.

#define M 1020001  // large prime number. 
#define L 14       // length of term.

char H[M][L];     // Hash table.

int getnum(char ch)  // character to number.
{
    if(ch == 'A'){ return 1; }
    else if(ch == 'C'){ return 2; }
    else if(ch == 'G'){ return 3; }
    else{ return 4; }
    return 0;
}

long long getkey(char word[])   // string to key.
{
    int sum = 0, p = 1, i;
    for(i = 0; word[i]; i++){
        sum = sum + p * getnum(word[i]);
        p = p * 5;
    }
    return sum;
}

int h1(int k){ return k % M; }   
int h2(int k){ return 1 + (k % (M - 1)); }  

int insert(char str[])
{
    int key, h, i;
    key = getkey(str);

    for(i = 0; ; i++){
        h = (h1(key) + i * h2(key)) % M;    // hash.
        if(strcmp(H[h], str)){  
            if(strlen(H[h]) == 0){ strcpy(H[h], str); return 1; }
        }else{ return 0; }
    }
    return 0;
}

int find(char str[])
{
    int key, h, i;
    key = getkey(str);

    for(i = 0; ; i++){
        h = (h1(key) + i * h2(key)) % M;
        if(strcmp(H[h], str)){
            if(strlen(H[h]) == 0){ return 0; } continue; }
            else{ return 1; }
    }
    return 0;
}

int main()
{
    char com[9], word[14];
    int NumOfCom;
    cin >> NumOfCom;

    for(int i = 0; i < M; i++) H[i][L] = '\0';  // initialize.

    while(NumOfCom){
        cin >> com >> word;
        if(com[0] == 'i'){ insert(word); }
        else{
            if(find(word)){ cout << "yes" << endl; }
			else{ cout << "no" << endl; }
        }
        NumOfCom--;
    };
    return 0;
}