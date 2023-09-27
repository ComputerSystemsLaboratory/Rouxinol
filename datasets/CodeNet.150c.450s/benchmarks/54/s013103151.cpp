#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include<cstdio>

using namespace std;

void Solution()
{
    string w;
    string t;
    
    int count = 0;
    
    cin>>w;
    
    for(int i = 0; i < (int)w.size(); i++)
    {
        w[i] = toupper(w[i]);
    }
    
    while(cin>>t)  //compute by each space
    {
        if(t == "END_OF_TEXT") break;
        
        for (int i = 0; i < (int)t.size(); i++)
        {
            t[i] = toupper(t[i]);
        }
        
        if(t == w) count++; // or if(t.find(w) != string::npos)
    }
    
    cout<<count<<endl;
    
}

int main()
{
    Solution();
    return 0;
}