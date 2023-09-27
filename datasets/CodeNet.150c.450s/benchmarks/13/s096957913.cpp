#include <iostream>
#include <cstring>

#define MAX_LEN (100)

using namespace std;

int is_only_lower(char str[]);

int main()
{
    char* s = new char[MAX_LEN + 1];
    char* p = new char[MAX_LEN + 1];

    do {
        cin >> s;
        cin >> p;
    } while (strlen(p) > strlen(s) || (strlen(p) < 1 || strlen(p) > 100) ||
	    (strlen(s) < 1 || strlen(s) > 100) ||
	    (is_only_lower(s) == 0 || is_only_lower(p) == 0));

    char* s2 = new char[MAX_LEN * 2 + 1];

    strcpy(s2, s);
    strcat(s2, s);

    if (strstr(s2, p) != NULL) {
        cout << "Yes" << endl;   
    } else {
        cout << "No" << endl;
    }

    delete[] s;
    delete[] p;
    delete[] s2;

    return (0);
}

int is_only_lower(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
         if (str[i] < 'a' || str[i] > 'z') {
	     break;
         } else {
	     ;
         }
    }

    if (str[i] == '\0') {
        return (1);
    } else {
        return (0);
    }
}