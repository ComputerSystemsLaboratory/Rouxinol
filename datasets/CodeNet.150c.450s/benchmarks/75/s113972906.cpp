#include"iostream"
#include"vector"
using namespace std;
vector<int> A;
void maxHeapify(int i)
{
  int l=i*2+1;
  int r=i*2+2;
  int largest;
  if(l<A.size()&&A[l]>A[i])largest=l;
  else largest=i;
  if(r<A.size()&&A[r]>A[largest])largest=r;
  if(largest!=i)
    {
      l=A[largest];
      A[largest]=A[i];
      A[i]=l;
      maxHeapify(largest);
    }
}
void buildMaxHeap()
{
  for(int i=A.size()/2;i>=0;i--)
    {
      maxHeapify(i);
    }
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int m;
      cin>>m;
      A.push_back(m);
    }
  buildMaxHeap();
  for(int i=0;i<n;i++)
    {
      cout<<" "<<A[i];
    }
  cout<<endl;
  return 0;
}
