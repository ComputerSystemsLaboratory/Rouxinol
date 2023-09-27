#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
#define EOT "END_OF_TEXT"

std::vector<std::string> split(const std::string &str, char sep)
{
    std::vector<std::string> v;
    std::stringstream ss(str);
    std::string buffer;
    while( std::getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}


int main()
{
    int count=0;
    std::string W, T, doubt;
    cin >> W;
    std::vector<std::string> result;
    getline(cin, doubt);

    while (getline(cin, T))
    {
        if (T==EOT)
            break;
        result = split(T, ' ');
        
        std::vector<std::string>::iterator itr;
        itr=result.begin();

        
        while (itr != result.end())
        {
            std::string s = *itr;
            std::transform(s.begin(), s.end(), s.begin(), tolower);
            if (s == W)
                count++;
            itr++;
        }    
    }


    cout << count << endl;

    return 0;
}
