#include <iostream>
#include <map>

using namespace std;

void Solution()
{
    string str;
    
    string most_Freq;
    string most_Long;
    
    int times = 0;
    
    map<string, int> data; // in this case, the default value of integer is "0", value can be recognized by "string" name
    
    most_Long = most_Freq = str;
    
    while (cin>>str)
    {
        data[str]++; //start to accumulate the data by variety "str"
        
        if (str.size() > most_Long.size()) //verify the longest word based on size
        {
            most_Long = str;
        }
        
        if (data[str] > times)
        {
            most_Freq = str;
            times = data[str];
        }
    }
    
    cout << most_Freq << " " << most_Long << endl;

}

int main()
{
    Solution();
    return 0;
}