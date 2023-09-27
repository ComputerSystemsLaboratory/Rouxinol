#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s, p;
    cin >> s >> p;

    int i, j, len;
	bool exist;
	len = 0;
    for(i = 0; s[i]; i++) len++;

    s = s + s;
	for(i = 0; i < len; i++){
        exist = true;
        for(j = 0; p[j]; j++){
            if(s[i + j] != p[j]){
                exist = false;
                break;
            }
        }
        if(exist) break;
    }
    if(exist){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}