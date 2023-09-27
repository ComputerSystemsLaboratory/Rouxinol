#include<iostream>
#include<string>

using namespace std;

int main(){

    string s,p;
    string result = "No";

    cin>>s;
    cin >> p;

    char c[200] = { };

    for(int i = 0; i< sizeof(c)/sizeof(c[0]);i++)
    {
        c[i]= s[i%s.length()];
    }

    for(int i = 0; i< sizeof(c)/sizeof(c[0]);i++)
    {
        int count = 0;
        while (p[count] == c[i + count])
        {
            count++;
            if(p.length() == count)
            {
                result = "Yes";
            }
        }
    }


    cout << result << endl;

    return 0;
}