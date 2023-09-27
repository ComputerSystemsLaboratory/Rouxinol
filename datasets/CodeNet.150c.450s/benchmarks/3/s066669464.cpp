#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

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

int Stoi(const std::string &str)
{
    int num=0, i=0;
    std::string s = str;
    while (i<s.size())
    {
        if (s[i]<'0'||s[i]>'9')
            break;
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num;
}

std::string replace(const std::string &str1, int a, int b, const std::string &str2)
{
    std::string s1, s2;
    s1 = str1; s2 = str2;

    s1 = s1.erase(a, b-a+1);
    //cout << s1 << endl;
    s1 = s1.insert(a, s2);
    //cout << s1 << endl;
    return s1;
}

int main(){
    int a, b, count=1;
    long long n;
    std::string str, line, doubt, s;
    cin >> str;
    cin >> n;
    std::getline(cin, doubt);

    std::vector<std::string> Priope, v;
    std::vector<int> num(n);


    for (int i = 0; i < n; i++)
    {
        std::getline(cin, line);
        v = split(line, ' ');

        a = Stoi(v[1]); b = Stoi(v[2]);
        
        if (v[0] == "print")
        {
            s = str.substr(a, b-a+1);
            Priope.push_back(s);
            num.push_back(i);
            //cout << s << endl;
        }
        else if (v[0] == "reverse")
            {std::reverse(str.begin()+a, str.begin()+b+1); }//cout << str << endl;}
        else if(v[0] == "replace")
            str = replace(str, a, b, v[3]);
        else
        {
            cout << "Wrong Command:" << v[0] << endl;
            i--;
        }
         
    }
/*
    for (int i = 0; i < num.size(); i++)
        cout << Priope(i) << endl;
*/
    std::vector<std::string>::iterator itr;
    itr = Priope.begin();
    while (itr != Priope.end())
    {
        cout << *itr << endl;
        itr++;
    }
        
    return 0;
}
