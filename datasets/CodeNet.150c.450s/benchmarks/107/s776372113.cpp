#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word1,word2;
    cin >> word1;
    cin >> word2;
    int L[1100][1100];
    int flag=1;
    for(int i=0;i<=word1.size();i++)
       L[i][0]=i;
    for(int j=0;j<=word2.size();j++)
       L[0][j]=j;
    for(int i=1;i<=word1.size();i++)
       for(int j=1;j<=word2.size();j++)
       {
           int min;
           if(word1[i-1]==word2[j-1])
             flag=0;
           min=L[i-1][j]+1;
           if(L[i][j-1]+1<min)
             min=L[i][j-1]+1;
           if(L[i-1][j-1]+flag<min)
             min=L[i-1][j-1]+flag;
           flag=1;
           L[i][j]=min;
       }
       cout << L[word1.size()][word2.size()] << endl;
}
