#include <iostream>
#include<algorithm>
#include<cctype>
#include<cstdio>

int main()
{
    std::string S;
    std::cin>>S;
    transform(S.begin(),S.end(), S.begin(), toupper);
    std::string str;
    int ans=0;
    while(std::cin>>str){
        if(str=="END_OF_TEXT")break;
        transform(str.begin(), str.end(), str.begin(), toupper);
        if(str==S)ans++;
    }
    std::cout<<ans<<std::endl;
    return 0;
}