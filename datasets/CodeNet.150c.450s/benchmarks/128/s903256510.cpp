#include<iostream>
#include<cstring>

using namespace std;

void reverseChar(char* str);

char str[50],rstr[50];
int i;

int main()
{
    cin>>str;
    reverseChar(str);
    cout<<str << endl;
    return 0;
}

void reverseChar(char* str)
{
    for(i=0;i<strlen(str)/2;i++)
    {
        char temp= str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
}