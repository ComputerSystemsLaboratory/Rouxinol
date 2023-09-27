#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i,N) for(int i=0; i<(int)(N); i++)
using namespace std;


int levenshtein(string str1, string str2);

int main(){
        string s1,s2;
        cin >> s1 >> s2;
        cout << levenshtein(s1, s2) << endl;
        return 0;
}

int d[1010][1010];
int levenshtein(string str1, string str2){
        rep(i,str1.size()+1){
                rep(j,str2.size()+1){
                        if(i==0) {
                                d[i][j]=j;
                        }else{
                                if(j==0) {
                                        d[i][j]=i;
                                }else{
                                        if(str1[i-1]==str2[j-1]) {
                                                d[i][j]=min(d[i-1][j-1],min(d[i][j-1]+1,d[i-1][j]+1));
                                        }
                                        else{
                                                d[i][j]=min(d[i-1][j-1]+1,min(d[i][j-1]+1,d[i-1][j]+1));
                                        }
                                }
                        }

                }
        }

        return d[str1.size()][str2.size()];
}

