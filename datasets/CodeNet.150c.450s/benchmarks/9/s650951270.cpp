#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    vector<string> allinputs;
    string output;
    int operation;
    regex pattern("[a-zA-Z]");
    smatch smc;
    while(1)
    {
        string tmps;
        cin >>  tmps;
        if(tmps=="-") break;
        allinputs.push_back(tmps);
    }
    //Junsang****for (auto var : allinputs)
    for (vector<string>::iterator it = allinputs.begin(); it != allinputs.end(); it++)
    {
        if(regex_search(*it, smc, pattern))
        {
            operation = 0;
            output = *it;
            for (vector<string>::iterator it2 = it+2; it2 != it+(stoi(*(it+1)))+2; it2++)
            {
                operation += stoi(*it2);
            }
                rotate(output.begin(), output.begin()+(operation%output.length()), output.end());
                cout << output << endl;
        }else
        {
            continue;
        }
    }
    return 0;
}

