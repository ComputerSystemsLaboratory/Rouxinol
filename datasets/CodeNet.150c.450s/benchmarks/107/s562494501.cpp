#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
int main(){
  std::string str1,str2;
    std::cin>>str1;
    std::cin>>str2;
	
  int ans[str1.length()+1][str2.length()+1];
  for (int j = 0; j < str1.length() + 1; j++) {
	  for (int k = 0; k < str2.length() + 1; k++) {
		  
		if (j == 0) {
			  ans[j][k] = k;
	  	}else if(k == 0) {
		  	  ans[j][k] = j;
		}else{
			  //std::cout << " str1= " << str1[j-1] << " str2= " << str2[k-1] << " \n ";
			  if (str1[j-1] == str2[k-1]){
			  	//std::cout << "(" <<ans[j - 1][k - 1] << "or" << ans[j - 1][k]+1 << "or" << ans[j][k - 1]+1 << ")" ;
				  ans[j][k] = std::min({ ans[j - 1][k - 1], ans[j - 1][k]+1, ans[j][k - 1]+1 });
				  //ans[j][k] = std::max({ 1,2,3 });
			  }else {
				  	ans[j][k] = std::min({ ans[j - 1][k - 1]+1,ans[j - 1][k]+1, ans[j][k - 1]+1 });
			  }
		}
		//std::cout << ans[j][k] << " ";
		
	  }
	  //std::cout << "\n";
  }
  std::cout << ans[str1.length()][str2.length()] << "\n";

  return 0;
}
