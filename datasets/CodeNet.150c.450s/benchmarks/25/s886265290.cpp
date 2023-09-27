#include <iostream>
#include <string>

using namespace std;
#define N = 1200;

int main()
{
    char c;
    int ans[26] = {0};

    while (cin>>c)
    {
        if( (int)'A' <= c && c <= (int)'Z')
        {
            c = c - (int)'A' + (int)'a';
        }
        if( (int)'a' <= c && c <= (int)'z')
            ans[(int)c -(int)'a' ]++;

    }

    for(int i=0;i<sizeof(ans)/sizeof(ans[0]);i++)
    {
        cout<< (char)(i+(int)'a') << " : " << ans[i]<<endl;
    }



    return 0;
}