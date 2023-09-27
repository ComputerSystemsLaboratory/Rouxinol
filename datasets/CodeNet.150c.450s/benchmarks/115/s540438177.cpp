#include <iostream>
#include <string>

/*int LCS(std::string str1, std::string str2, int i, int j){
  if(str1[i] == str2[j]){
    return 1;
  }
  else{
    return 0;
  }
 }
*/

int max(int a, int b, int c){
  int m = a;
  if(b > m){
    m = b;
  }
  if(c > m){
    m = c;
  }
  return m;
}

int main(){
  int q;
  std::cin >> q;
  //int ans[q];
  std::string str1, str2;
  for(int z=0; z<q; z++){
    std::cin >> str1 >> str2;
    int l1 = str1.size();
    int l2 = str2.size();
    int DP[l1+1][l2+1];

    for(int i=0; i<=l1; i++){
      DP[i][0] = 0;
    }
    for(int j=0; j<=l2; j++){
      DP[0][j] = 0;
    }

    for(int i=1; i<=l1; i++){
      for(int j=1; j<=l2; j++){
	if(str1[i-1] == str2[j-1]){
	  DP[i][j] = max(DP[i-1][j], DP[i][j-1], DP[i-1][j-1] + 1);
	}
	else{
	  DP[i][j] = max(DP[i-1][j], DP[i][j-1], DP[i-1][j-1]);
	}
      }
    }
    //ans[z] = DP[l1][l2];
    std::cout << DP[l1][l2] << std::endl;
  }

  /*for(int z=0; z<q; z++){
    std::cout << ans[z] << std::endl;
    }*/
  return 0;
}
