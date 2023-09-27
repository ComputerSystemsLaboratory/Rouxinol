#include<bits/stdc++.h>
using namespace std;

#define STR_MAX 1000

int mat[STR_MAX+1][STR_MAX+1];

int common_subsequence(int len1, int len2, string str1, string str2){
  int i, j;

  for(i=1; i<=len1; i++){
    for(j=1; j<=len2; j++){
      if(str1[i-1] == str2[j-1]) mat[i][j]=mat[i-1][j-1]+1;
      else mat[i][j]=max(mat[i-1][j], mat[i][j-1]);
    }
  }

  return mat[len1][len2];
}

int main(void){
  int i, n;
  string str1, str2;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    cin >> str1 >> str2;

    int len1=str1.size(), len2=str2.size();
    printf("%d\n", common_subsequence(len1, len2, str1, str2));
  }
  
  return 0;
}


