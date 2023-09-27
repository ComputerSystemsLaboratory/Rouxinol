#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char test_str[201], search_string[101], copied_test_str[101];
    cin >> test_str >> search_string;
    strcpy(copied_test_str, test_str);
    strcat(test_str, copied_test_str);

    cout << (strstr(test_str, search_string) ? "Yes" : "No") << endl;
    return 0;
}