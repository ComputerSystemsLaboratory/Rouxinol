#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,size_t> word_count;
    string word;
    while(cin>>word)
        ++word_count[word];
    map<string,size_t>::iterator a,b,c;
    a=b=word_count.begin();
    for( c=word_count.begin();c!=word_count.end();c++)
    {
        if(c->first.size()>a->first.size())
            a=c;
        if(c->second>b->second)
            b=c;
    }
    cout<<b->first<<' '<<a->first<<"\n";
    return 0;
}