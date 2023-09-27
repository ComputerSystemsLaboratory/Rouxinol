#include <bits/stdc++.h>

using namespace std;

int main()
{
    int conversion_num;
    
    while (cin >> conversion_num) {
        if (conversion_num == 0) break;
        
        map<string, string> ConversionBase;

        for (int i = 0; i < conversion_num; ++i) {
            string str1, str2;
            
            cin >> str1 >> str2;
            
            ConversionBase[str1] = str2;
        }
        
        int string_num;
        
        cin >> string_num;
        
        string ans;
        
        for (int i = 0; i < string_num; ++i) {
            string temp;
            
            cin >> temp;
            
            if (ConversionBase.find(temp) != ConversionBase.end()) {
                ans += ConversionBase[temp];
            } else {
                ans += temp;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}