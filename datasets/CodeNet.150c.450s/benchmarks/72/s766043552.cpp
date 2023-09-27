#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string a;
    char buf;
    while(scanf("%c",&buf)){
        if(buf == '\n'){
            break;
        }

        if(!isalpha(buf)){
            a.push_back(buf);
        }else if(isupper(buf)){
            a.push_back(tolower(buf));
        }else if(islower(buf)){
            a.push_back(toupper(buf));
        }

    }

    cout << a << endl;

}