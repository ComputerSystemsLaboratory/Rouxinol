#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int change_suji( string str ){
  int i,len = str.size();
  int result = 0,kakeru = 1;
  for( i = len - 1; i >= 0; i-- ){
    result += kakeru * (str[i] - '0');
    kakeru *= 10;
  }
  return result;
}

string change_moji( int n ){
  string str;
  while(n){
    str += (n % 10) + '0';
    n /= 10;
  }
  reverse( str.begin(),str.end() );
  return str;
}

int main(){
  string str,moji;
  int i,L,max_suji,min_suji,cycle,memo[22],tmp,tmp_cnt,flag,tmp_suji;
 
  while(1){
    flag = 0;
    cin >> str >> L;
    if( str == "0" && L == 0 ) break;
    for( i = 0; i < 21; i++ ) memo[i] = 0;
    int cnt = 0;
    memo[0] = change_suji(str);    
    while(1){
      // cnt++;
      int len = str.size();
      if( L - len > 0 ){
	for(i = 1; i <= L-len; i++ ){
	  str+='0';
	}
      }
    
      sort( str.begin(), str.end() );
      reverse( str.begin(), str.end() );
      max_suji = change_suji(str);
  
      reverse( str.begin(), str.end() );
      min_suji = change_suji(str);
  
      cycle = max_suji - min_suji;
      cnt++;     
    
     
      for( i = cnt-1; i >= 0; i-- ){
	if( cycle == memo[i] ){
	  //  cout << "i" << i << " " << cycle << " " << memo[i] << endl;
	  tmp = i;
	  tmp_cnt = cnt - i;
	  tmp_suji = memo[i];
	  flag = 1;
	  break;
	}
      }
      if( flag == 1 ) break;
      memo[cnt] = cycle;   
      moji = change_moji(cycle);
        
      str = moji;
     
    }
    cout << tmp << " " << tmp_suji << " " << tmp_cnt << endl;
  }
  return 0;
}