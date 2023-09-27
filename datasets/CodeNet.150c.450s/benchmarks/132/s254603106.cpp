#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, p;
  int i, k, wan, j;



    while(1){
      int temp[60] = {}, ans = -1;
      cin>>n>>p;
      
      if(n == 0 && p == 0) break;
      
      wan = p;

      //  cout<<n<<endl;
      while(1){//cout<<"QQQQQQQQQQQQQQQQQQQQQQQ"<<endl;cout<<"wan = "<<wan<<endl;



	
	for(i = 0; i < n; i++){//cin>>n;cout<<"NNNNNN"<<endl;
	  if(wan >= 1){//cout<<"wan = "<<wan<<endl;
	    if(wan == 1){//cout<<"CCCCCCCCCCCCCCCCCCCCCCC"<<endl;cout<<"wan = "<<wan<<endl;
	      // k = 0;
	      // cin>>n;
	      /* for(j = 0; j < n; j++){cout<<"BBBBBBBBBBBBBBBBBBBBB"<<endl;
		if(temp[j] >= 1){//cout<<temp[j];
		  k = 1;cout<<"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ  temp[j] ="<<temp[j]<<" j ="<<j<<endl;
		  break;
		}//cin>>n;
		}*/ wan--;
	      temp[i]++;
	      if(temp[i] == p){//cout<<"DDDDDDDDDDDDDDDD"<<endl;cout<<"wan = "<<wan<<endl;
		  ans = i;
		  break;
	      }//cin>>n;
	      
	    } else {//cout<<"EEEEEEEEEEEEEEEEEEEE"<<endl;
	      // cout<<"wan = "<<wan<<endl;
	      temp[i]++;//cout<<temp[i]<<" "<<i<<endl;
	      wan--;//cin>>n;
	    }
	    
	  } else {//cout<<"AAAAAAAAAAA"<<endl;cout<<"wan = "<<wan<<endl;
	    wan += temp[i];//cin>>n;
	    temp[i] = 0;
	  }
	  
	}





	if(ans != -1)break;//cout<<"RRRRR"<<endl;cout<<"wan = "<<wan<<endl;

	
      }
     
      
       cout<<ans<<endl;//cout<<"HHHHHHHHHHHH"<<endl;;
    }
  
  
  
  return 0;
}

