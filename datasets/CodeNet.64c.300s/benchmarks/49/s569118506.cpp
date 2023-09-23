///....................SUBRATO MOLLICK....................///
///.....DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING....///
///.............ISLAMIC UNIVERSITY,BANGLADESH.............///
///........................BETCH-10.......................///
#include <iostream>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++)
#define REP2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define INF (1<<30)
#define PI 3.14159265358979323846264338327950
#define pb(x) push_back(x)
#define ALL(x) x.begin(),x.end()
#define SZ size()
#define eps 1e-9
#define VI vector<int>
#define VS vector<string>
#define LL long long
#define MII map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define all(x) x.begin(),x.end()

/*long long c[201]={0};
bool p[205]={0};
void sieve()
{
   long long i,j;
    j=4;
     while(j<=201)
     {
         p[j]=1;
         j+=2;
     }
     long k=1;
     for(i=3;i<=(201);i+=2)
     {
        if(p[i]==0)
        {
            j=i;
            while(j+i<=201)
            {
                p[j+i]=1;j+=i;
            }
            if(p[i+2]==0)
            c[k++]=i;
        }
    }
}*/
/*long long npr(long n,long m)
{
   long long ret=1,i;
   for(i=1;i<=m;i++)
   ret*=(n-i+1);
   return ret;
}*/
/*long long ncr(long n,long m)
{
   long long ret=1,i;
   for(i=1;i<=m;i++)
   {
       ret*=(n-i+1);
       ret/=i;
   }
   return ret;
}*/
/*long long fact(long n)
{
    long long ret=1,i;
    for(i=1;i<=n;i++)
    ret*=i;
    return ret;
}*/
/*long long gcd(long n,long m)
{
  while(m>0)
  {
    n=n%m;
    n=n^m;
    m=m^n;
    n=n^m;
  }
  return n;
}*/
/*long long lcm(long n,long m)
{
    long long x=(n*m)/gcd(n,m);
    return x;
}*/
/*long is_prime(long n)
{
	long long ii;
	if(n == 1)
	return 0;
	if(n == 2)
	return 1;
	if(n%2 == 0)
	return 0;
	for(ii=3;ii*ii<=n;ii=ii+2)
        if(n%ii == 0)
        return 0;
        return 1;
}*/
/*double area_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double a;
    a=x1*(y2-y3)+y1*(x3-x2)+((x2*y3)-(y2*x3))+eps;
    a=a/2+eps;
    return a;
}*/
/*double dist_2point(double x1,double y1,double x2,double y2)
{
    double d;
    d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    return d;
}*/
/*int binary_search(int a[],int n,int l,int u)
{
	int mid;
	if(l>u)
    return 0;
    mid=floor(l+u)/2;
    if(a[mid]==n)
    return mid;
    else if(a[mid]>n)
    binary_search(a,n,l,mid-1);
    else
    binary_search(a,n,mid+1,u);
}*/
/*bool is_palindrome(const string &s, int start, int end)
{
    int siz=end-start+1;
    if(siz%2==0)
    {
        int middle=start+siz/2;
        int i;
        for(i =0;middle-1-i>=0&&middle+i<=end&&s[middle-1-i]==s[middle+i];i++);
        if(middle-i-1<0||middle+i>end)
        return true;
    }
    else
    {
        int middle = start + siz/2;
        int i;
        for (i=1;middle-i>=0&&middle+i<=end&&s[middle-i]==s[middle+i];i++);
        if (middle-i<0||middle+i>end)
        return true;
    }
    return false;
}*/
int main()
{

    //freopen("Input.txt","r",stdin);
	//freopen("Output.txt","w",stdout);
	long n,m;
while(cin>>n>>m)
	{
	    long k=0;
	    n=n+m;
	    while(n!=0)
        {
            k++;
            n=n/10;
        }cout<<k<<endl;
    }
return 0;
}