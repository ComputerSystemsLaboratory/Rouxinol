#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
int main(){
  int q;
  std::cin>>q;
  std::vector<std::string> str1,str2;
  std::string str;
  for(int i=0;i<q;i++){
    std::cin>>str;
    str1.push_back(str);
    std::cin>>str;
    str2.push_back(str);
    //std::cout<<str1[i][0]<<"\n";
    //std::cout<<str2[i][0]<<"\n";
  }
  
 
  for (int i = 0; i < q; i++) {
	  int ans[str1[i].length()+1][str2[i].length()+1];
	  for (int j = 0; j < str1[i].length() + 1; j++) {
		  for (int k = 0; k < str2[i].length() + 1; k++) {
			  
			  if (j == 0 || k == 0) {
				  ans[j][k] = 0;
			  }else {
				  //std::cout << " str1= " << str1[i][j-1] << " str2= " << str2[i][k-1] << " \n ";
				  if (str1[i][j-1] == str2[i][k-1]){
					  //std::cout << "ppp";
					  ans[j][k] = std::max({ ans[j - 1][k - 1] + 1,ans[j - 1][k],ans[j][k - 1] });
					  //ans[j][k] = std::max({ 1,2,3 });
				  }else {
					  ans[j][k] = std::max(ans[j - 1][k], ans[j][k - 1]);
				  }
			  }
			  //std::cout << ans[j][k] << " ";
			  
		  }
		  //std::cout << "\n";
	  }
	  std::cout << ans[str1[i].length()][str2[i].length()] << "\n";
  }
  

  return 0;
}

