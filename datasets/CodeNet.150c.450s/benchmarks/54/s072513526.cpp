#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char check[9];
    char sen[100];
    cin >> check;
    int num = 0;
    while(cin >> sen){
        for(int i = 0; i < strlen(sen) ; i++){
            if(isupper(sen[i]))
                sen[i] = tolower(sen[i]);
            if(check[i] != sen[i] ||strlen(sen) != strlen(check))
            	break;
            if(i == strlen(sen) - 1)
            	num++;
        }
    }
    cout << num << endl;
	return 0;
}