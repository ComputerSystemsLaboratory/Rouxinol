
#include <iostream>
using namespace std;
 
int main()
{
    char in[1000];
    while (true)
    {
		int s = 0; 
		int i = 0;
        cin >> in;
        if (in[i] == '0')
        {
            break;
        }
        while (in[i])
        {
            s = s + in[i] - '0';
            i++;
        }
        cout << s << endl;
    }
   return 0;
}