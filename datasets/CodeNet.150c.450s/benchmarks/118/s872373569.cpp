#include <cstdio>
#include <iostream>
using namespace std;

int calc(int y,int m,int d)
{
  int count=0;

  for(int y_t=1;;y_t++){//年
    if(y_t%3==0){
      for(int m_t=1;m_t<=10;m_t++){//月
	for(int d_t=1;d_t<=20;d_t++){//日
	  count++;
	  if(y_t==y && m_t == m && d_t ==d)return count;
	  //printf("%d %d %d\n",y_t,m_t,d_t);
	}
      }
    }else{
      for(int m_t=1;m_t<=10;m_t++){
	if(m_t%2==1){
	  for(int d_t=1;d_t<=20;d_t++){
	    count++;
	    if(y_t == y && m_t ==m && d_t ==d)return count;

	  }
	}else{
	  for(int d_t=1;d_t<=19;d_t++){
	    count++;
	    if(y_t == y && m_t ==m && d_t ==d)return count;
	    //printf("%d %d %d\n",y_t,m_t,d_t);	  
	  }
	}
      }
    }
  }

  //return count;
}
  


int main(void)
{
  
  int n;

  int y,m,d;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> y >> m >> d;
    printf("%d\n",calc(1000,1,1)-calc(y,m,d));

  }
}