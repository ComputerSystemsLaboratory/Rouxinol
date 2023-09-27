#include <iostream>
#include <string>

#define MAX_TURN (1000)
#define MAX_LEN  (100)

using namespace std;

int is_only_lower(string str);

int main()
{    
    int  n;
    int  T_score = 0, H_score = 0;
    
    do {
        cin >> n;
    } while (n > MAX_TURN);
   
    string* Taro = new string[n];
    string* Hanako = new string[n];
   
    for (int i = 0; i < n; i++) {
         do {
             cin >> Taro[i] >> Hanako[i];	     
	 } while (Taro[i].length() > MAX_LEN || Hanako[i].length() > MAX_LEN ||
                  is_only_lower(Taro[i]) == 0 || is_only_lower(Hanako[i]) == 0);

	 if (Taro[i] > Hanako[i]) {
	     T_score += 3;
         } else if (Taro[i] == Hanako[i]) {
	     T_score += 1;
             H_score += 1;
         } else {
	     H_score += 3;
         }
    }
	     
    cout << T_score << " " << H_score << endl;
   
    delete[] Taro;
    delete[] Hanako;

    return (0);
}

int is_only_lower(string str)
{   
    int i;

    for (i = 0; str[i] != '\0'; i++) {
         if (str[i] < 'a' || str[i] > 'z') {
	     break;
         }         
    }
 
    if (str[i] == '\0') {
        return (1);
    } else {
        return (0);
    }
}