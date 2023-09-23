#include <iostream>
#include <cctype>

#define MAX_LEN (1200)

using namespace std;

int main()
{ 
    char* str = new char[MAX_LEN + 1];
   
    cin.getline(str, MAX_LEN, '\n');

    for (int i = 0; str[i] != '\0'; i++) {
         if (str[i] >= 'A' && str[i] <= 'Z') {
             str[i] = tolower(str[i]);
         } else if (str[i] >= 'a' && str[i] <= 'z') {
             str[i] = toupper(str[i]);
         }  
    }                               
     
    cout << str << endl;

    delete[] str;     
	   
    return (0);
}