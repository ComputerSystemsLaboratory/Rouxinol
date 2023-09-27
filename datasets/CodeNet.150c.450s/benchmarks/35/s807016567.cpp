#include <iostream>

using namespace std;

void Solution()
{
    int n;  // period or cycle or term
    int input; // every element
    
    long sum;
    long max; // the biggest value
    
    while(cin>>n, n != 0)
    {
        cin >> input; // the first number of sequence
        
        max = sum = input;
        
        for(int i = 0; i < n - 1; i++)
        {
            cin >> input;
           
            if(sum < 0) // judge based on the first number of sequence
            {
                sum = input;
            }
            else
            {
                sum += input;
            }
            
            if(sum > max)
            {
                max = sum;
            }
        }
        
        cout<<max<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}