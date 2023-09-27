#include<iostream>
#include<vector>

using namespace std;
int n;
void countingSort(short A[],short B[],int k)
{
  int C[k+1];
  for(int i=0;i<k+1;i++)
    {
      C[i]=0;
    }
  for(int j=0;j<n;j++)
    {
      C[A[j]]++;
    }
  for(int i=1;i<k+1;i++)
    {
      C[i]+=C[i-1];
    }
  for(int j=n-1;j>=0;j--)
    {
      //      cout<<"A[j]:"<<A[j]<<endl;
      B[C[A[j]]-1]=A[j];
      C[A[j]]=C[A[j]]-1;
    }
}
int main()
{
  for(;cin>>n;)
    {
      short data[n];
      short out[n];
      int k=0;
      for(int i=0;i<n;i++)
	{
	  cin>>data[i];
	  if(k<data[i])
	    k=data[i];
	}
      countingSort(data,out,k);
      for(int i=0;i<n;i++)
	{
	  cout<<out[i];
	  if(i!=n-1)
	    cout<<" ";
	  else 
	    cout<<endl;
	}
    }
}