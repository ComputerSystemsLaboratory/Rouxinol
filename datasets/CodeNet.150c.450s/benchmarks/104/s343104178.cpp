#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <sstream>

using namespace std;

int main()
{
    int w,n;
    int A[100];
    while(cin >> w >> n)
    {
        for(int i=0; i<w; i++)
            A[i] = i + 1;
        string str;
        for(int i=0; i<n; i++)
        {
            cin >> str;
            int len = str.length();
            int d = str.find(',',0);
            string str1 = str.substr(0,d);
            string str2 = str.substr(d+1,len-1);
            str1 = str1 + " " + str2;
            int a;
            istringstream issInt(str1);
            issInt >> a;
            int b;
            issInt >> b;
            int t = A[a-1];
            A[a-1] = A[b-1];
            A[b-1] = t;
        }
        for(int i=0; i<w; i++)
            cout << A[i] << endl;
    }
    return 0;
}