#include<iostream>
#include<cstring>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;



int calc_array(vector< vector<int> > &v_array,int start,int end,int a_array[1500]);
//int calc_array_w(vector< vector<int> > &v_array,int start,int end);

int main(void){

  int n,m;
  int answer;
  int max_h=0;
  int max_w=0;  

  int h[1500];
  int w[1500];

  vector< vector<int> > h_value;
  vector< vector<int> > w_value;
  vector<int> ans_array_h(1500*1000);
  vector<int> ans_array_w(1500*1000);  


  h_value.resize(1500);
  for(int i=0;i<1500;i++){
    h_value[i].resize(1500);
    //fill(h_value[i].begin(),h_value[i].end(),0);
  }
  w_value.resize(1500);
  for(int i=0;i<1500;i++){
    w_value[i].resize(1500);
    //fill(w_value[i].begin(),w_value[i].end(),0);
  }          
  
  while(1){
    fill(ans_array_h.begin(),ans_array_h.end(),0);
    fill(ans_array_w.begin(),ans_array_w.end(),0);    
    memset(h,0,sizeof(int)*1500);
    memset(w,0,sizeof(int)*1500);

    cin >> n;
    cin >> m;
    
    if(n == 0 && m == 0) break;
    else{
      for(int i=0;i<1500;i++){
	fill(h_value[i].begin(),h_value[i].end(),0);
	fill(w_value[i].begin(),w_value[i].end(),0);		
      }
      //cout << "n:" << n << endl;	    
      for(int i=0;i<n;i++){
	cin >> h[i];
	h_value[i][i]=h[i];
	//cout << h[i] << endl;	
      }
      //cout << "m:" << m << endl;
      for(int i=0;i<m;i++){
	cin >> w[i];
	w_value[i][i]=w[i];	
	//cout << w[i] << endl;		
      }

      //calc_array(h_value,0,n-1,h);
      //calc_array(w_value,0,m-1,w);    
      for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
	  h_value[i][j]=h_value[i][j-1]+h[j];
	}
      }
      for(int i=0;i<m;i++){
	for(int j=i+1;j<m;j++){
	  w_value[i][j]=w_value[i][j-1]+w[j];
	}
      }      
    }

    max_h=0;
    max_w=0;    
    
    //cout << "h_array" << endl;
    for(int i=0;i < n;i++){
      for(int j=0;j < n;j++){
	//cout << h_value[i][j] << ",";
	if(h_value[i][j] > max_h) max_h=h_value[i][j];
	ans_array_h[h_value[i][j]]+=1;
      }
      //cout << endl;
    }

    //cout << "w_array" << endl;
    for(int i=0;i < m;i++){
      for(int j=0;j < m;j++){
	//cout << w_value[i][j] << ",";
	if(w_value[i][j] > max_w) max_w=w_value[i][j];	
	ans_array_w[w_value[i][j]]+=1;	
      }
      //cout << endl;
    }
    //cout << "h_array_ans" << endl;    
    for(int i=0;i<max_h;i++){
      if(ans_array_h[i] != 0){
	//cout << i << ":" << ans_array_h[i] << endl;
      }
    }
    //cout << "w_array_ans" << endl;        
    for(int i=0;i<max_w;i++){
      if(ans_array_w[i] != 0){
	//cout << i << ":" << ans_array_w[i] << endl;
      }
    }    
    answer=0;
    for(int i=1;i <= min(max_h,max_w);i++){
      answer+=ans_array_h[i]*ans_array_w[i];
    }
    
    //cout << "answer:" << answer << endl;
    cout << answer << endl;
    
  }
  
  return 0;
}

/*
int calc_array(vector< vector<int> > &v_array,int start,int end,int a_array[1500]){
  if(v_array[start][end] != 0) return 0;  
  if(start > end) return -1;
  else{
    if(start == end){
      if( v_array[start][end] == 0 ){
	v_array[start][end] = a_array[start];
      }
    }
    else{
      for(int i=start;i<=end;i++){
	v_array[start][end] += a_array[i];
      }
      for(int i=start;i<=end;i++){
	calc_array(v_array,start,i,a_array);
	calc_array(v_array,i+1,end,a_array);	
      }
    }
  }
  return 0;
}
*/

