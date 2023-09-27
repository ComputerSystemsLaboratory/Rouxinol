#include <iostream>
using namespace std;


int main(void){
    // Your code here!
    int D;
    int c[26];
    int s[365][26];
    int t;
    int neglect[26]={};
    long S = 0;
    
    scanf("%d",&D);
    for(int i = 0; i < 26; i++)
        scanf("%d",&c[i]);
        
    for(int i = 0; i < D; i++)
        for(int j = 0; j < 26; j++)
            scanf("%d",&s[i][j]);
            
    for(int i = 0; i < D; i++)
    {
        scanf("%d",&t);
        
        for(int j = 0; j < 26; j++)
        {
            neglect[j] = (t-1-j != 0)*(neglect[j]+1);
            S -= c[j]*neglect[j];
        }
        
        S += s[i][t-1];
        printf("%ld\n",S);
    }
        
}
