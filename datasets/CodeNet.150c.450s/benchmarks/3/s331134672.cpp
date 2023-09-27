#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str,com;
    cin >> str;

    int q,num1,num2;
    cin >> q;

    for(int i=0;i<q;i++){
        cin >> com >> num1 >> num2;
        if(com=="print"){
            for(int j=num1;j<=num2;j++){
            cout << str[j];
            }
            cout << endl;
        }
        else if(com=="reverse"){
            for(int j=num1;j<num1+(num2-num1+1)/2;j++){
                char c=str[num1+num2-j];
                str[num1+num2-j]=str[j];
                str[j]=c;
                
            }
        }
        else if(com=="replace"){
            string s;
            cin >> s;
            str.replace(num1,num2-num1+1,s);
        }
    }
    
    return 0;
}