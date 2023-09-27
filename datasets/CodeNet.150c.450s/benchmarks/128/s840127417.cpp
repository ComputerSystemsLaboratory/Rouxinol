#include<iostream>

using namespace std;

int main()
{
        string input;
        int num = 0;
        int i = 0;
        int count = 0;
        char temp[1];

        cin >> input;
        num = input.size();
        char str[num]; //= input.toCharArray(); 

        sprintf(str,"%s",input.c_str());

        if(num % 2 == 0)
        {
                count = num / 2;
        }
        else
        {
                count = (num - 1) / 2;
        }

        for(i = 0;i < count;i++)
        {
                temp[0] = str[i];
                str[i] = str[num -  1 - i];
                str[num - 1 - i] = temp[0];
        }

        string output = string(str);
        cout << output << endl;

}