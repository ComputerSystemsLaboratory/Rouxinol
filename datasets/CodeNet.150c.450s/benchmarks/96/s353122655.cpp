#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    string phone[10] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n;
    string input;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        int l = input.length();
        int j = 0;
        while(1){
            int c1 = 0;
            while(c1 == 0 && j < l){
                c1 = input[j] - '0';
                j++;
            }
            if(j == l) break;
            int l2 = phone[c1 - 1].length();
            int k = 0;
            while(c1 == input[j] - '0'){
                j++;
                k++;
            }
            cout << phone[c1 - 1][k % l2];
        }
        cout << endl;
    }
    return 0;
}