#include <iostream>
#include<cmath>

using namespace std;

void Solution()
{
    int month;
    int day;
    
    string week[7] = {
        "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"
    };
    
    int mDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while(cin>>month>>day)
    {
        int sum = 0;
        
        if (month == 0)
        {
            break;
        }
        
        for (int i = 0; i < month - 1; i++)
        {
            sum = mDays[i] + sum;
        }
        
        cout<<week[(sum + day) % 7]<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}