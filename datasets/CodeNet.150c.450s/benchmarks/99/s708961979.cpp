#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  int i,j,k,n;
  string str1,str2;
  vector <char> ans;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> str1 >> str2;
  
    int result = 0;   
    int len1 = str1.size();
    int len2 = str2.size();


    for(j = 0; j < len1; j++){
      if(str1[j]=='m'){
	if(str1[j-1] >= '2' && str1[j-1] <= '9'){
	  result += (str1[j-1]-'0')*1000;
	}else{
	  result += 1000;
	}
      }
  
  
      if(str1[j]=='c'){
	if(str1[j-1] >= '2' && str1[j-1] <= '9'){
	  result += (str1[j-1]-'0')*100;
	}else{
	  result += 100;
	}
      
      }
      if(str1[j]=='x'){
	if(str1[j-1] >= '2' && str1[j-1] <= '9'){
	  result += (str1[j-1]-'0')*10;
	}else{
	  result += 10;
	}
      }
      
    
      if(str1[j]=='i'){
	if(str1[j-1] >= '2' && str1[j-1] <= '9'){
	  result += (str1[j-1]-'0')*1;
	}else{
	  result += 1;
	}  
      }
    }
    
      for(j = 0; j < len2; j++){
	if(str2[j]=='m'){
	  if(str2[j-1] >= '2' && str2[j-1] <= '9'){
	    result += (str2[j-1]-'0')*1000;
	  }else{
	    result += 1000;
	  }
      
	}
	if(str2[j]=='c'){
	  if(str2[j-1] >= '2' && str2[j-1] <= '9'){
	    result += (str2[j-1]-'0')*100;
	  }else{
	    result += 100;
	  }
      
	}
	if(str2[j]=='x'){
	  if(str2[j-1] >= '2' && str2[j-1] <= '9'){
	    result += (str2[j-1]-'0')*10;
	  }else{
	    result += 10;
	  }
	}
      
    
	if(str2[j]=='i'){
	  if(str2[j-1] >= '2' && str2[j-1] <= '9'){
	    result += (str2[j-1]-'0')*1;
	  }else{
	    result += 1;
	  }  
	}
      }

      ans.clear();
      if(result/1000 >0){
	if(result/1000 > 1){
	  ans.push_back(result/1000+'0');
	  ans.push_back('m');
	}else{
	  ans.push_back('m');
	}
	result%=1000;
      }
      if(result/100 >0){
	if(result/100 > 1){
	  ans.push_back(result/100+'0');
	  ans.push_back('c');
	}else{
	  ans.push_back('c');
	}
	result%=100;
      }
      if(result/10 >0){
	if(result/10 > 1){
	  ans.push_back(result/10+'0');
	  ans.push_back('x');
	}else{
	  ans.push_back('x');
	}
	result%=10;
      }
      if(result/1 >0){
	if(result/1 > 1){
	  ans.push_back(result/1+'0');
	  ans.push_back('i');
	}else if(result/1==1){
	  ans.push_back('i');
	}
      }
  
      int len3 = ans.size();
      for(k = 0; k < len3; k++){
	cout << ans[k];
      }
      cout << endl;
    
  }
  return 0;
}