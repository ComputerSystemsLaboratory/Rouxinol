#include <iostream>
#include <vector>

using namespace std;

void Solution()
{
    int w, n;
    
    int temp; //data for swapping
    int a, b;
    char c;
        
    
    cin>>w;
    cin>>n;
    
    vector<int> v;
    
    for(int i = 0; i <= w; i++) // the smallest digit is 1
    {
        v.push_back(i);
    }
    
    for(int i = 0; i < n; i++)
    {
        cin>>a>>c>>b;
        
        temp = v[a]; //swap the position
        v[a] = v[b];
        v[b] = temp;
    }
    
    for(int i=1; i <= w; i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}