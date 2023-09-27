#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string s, p;
    std::cin >> s >> p;
    int s_len, p_len;
    bool flag = false;
    s_len = s.length();
    p_len = p.length();
    for (int i=0; i<s_len; ++i){
        if(flag){
            break;
        }
        for (int j=0; j<p_len; ++j){
            if (i+j < s_len && (char)(s[i+j] - p[j]) != 0){
                break;
            }
            else if (i+j >= s_len && (char)(s[i+j-s_len] - p[j]) != 0){
                break;
            }
            if (j == p_len-1 && ((i+j < s_len && (char)(s[i+j] - p[j]) == 0) || (i+j >= s_len && (char)(s[i+j-s_len] - p[j]) == 0))){
                std::cout << "Yes" << endl;
                flag = true;
            }
        }
    }
    if(!flag){
        std::cout << "No" << endl;
    }
    return 0;
}

