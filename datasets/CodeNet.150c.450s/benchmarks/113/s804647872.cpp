#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
        vector<int> x;
        int input_val;
        int input_num = 0;

        do{
                cin >> input_val;
                x.push_back(input_val);
                input_num++;
        } while(input_val != 0);

        for(int i = 0; i < input_num; i++)
        {
                if( x[i] != 0 )
                {
                        cout << "Case " << (i+1) << ": " << x[i] << endl;
                }
        }
        return 0;
}