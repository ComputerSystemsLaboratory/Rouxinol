#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> array)
{
  for(int i=0;i<array.size()-1;i++){
    cout<<array[i]<<" ";
  }
  cout<<array[array.size()-1]<<endl;
}
void swap(int& a,int& b)
{
  if(a>=b){
    int tmp=a;
    a=b;
    b=tmp;
  }
}

vector<int> marge(vector<int>& list,int& count)
{
  int n=list.size();
  vector<int> result(0);
  int i=0,j=0;
  int half;
  vector<int> left(0);
  vector<int> right(0);
  if(n==1){
    return list;
  }else if(n==2){
    swap(list[0],list[1]);
    count+=2;
    return list;
  }else{
    half=n/2;

    for(i=0;i<half;i++){
      left.push_back(list[i]);
    }

    for(i=half;i<n;i++){
      right.push_back(list[i]);
    }

    left=marge(left,count);
    right=marge(right,count);
    i=0; j=0;
    while(result.size()<n){
      if(i==left.size()){
	while(j<right.size()){
	  result.push_back(right[j]);
	  j++;
	  count++;
	}
	break;
      }else if(j==right.size()){
	while(i<left.size()){
	  result.push_back(left[i]);
	  i++;
	  count++;
	}
	break;
      }
      if(left[i]<=right[j]){
	result.push_back(left[i]);
	i++;
	count++;
      }else{
	result.push_back(right[j]);
	j++;
	count++;
      }
    }
  }
  return result;
}

int main()
{
  int n,count=0;
  cin>>n;
  vector<int> list(n);
  for(int i=0;i<n;i++){
    cin>>list[i];
  }
  list=marge(list,count);
  print(list);
  cout<<count<<endl;
  return 0;
}

