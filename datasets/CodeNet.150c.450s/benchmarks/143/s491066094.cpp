#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_DISABLE_PERFCRIT_LOCKS
#define POPCNTI(a) __builtin_popcount(a)
#define fs  first  
#define sc  second

#include <bits/stdc++.h>
using namespace std;

#define error(args...)                       \
{                                            \
    cerr<<"LINE "<<__LINE__;                 \
    string _s = #args;                       \
    replace(_s.begin(), _s.end(), ',', ' '); \
    stringstream _ss(_s);                    \
    istream_iterator<string> _it(_ss);       \
    err(_it, args);                          \
    cerr<<endl;                              \
}
void err(istream_iterator<string> it)
{
} 
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
  cerr<<' '<< *it << " = " << a ;
  err(++it, args...);
}

// cf? uncomment : comment
// #ifndef _LOCAL_DEFINE
// inline int getchar_unlocked(){return _getchar_nolock();}
// inline void putchar_unlocked(char c) {_putchar_nolock(c);}
// #endif

typedef long long ll;  

inline void WRITE_CHAR(char c)  {putchar_unlocked(c);} 
template<typename T> 
inline bool READn (T &result) {
  int minus = 1;
  char ch;
  result=0;
  ch = (char) getchar_unlocked();
  while (!isdigit(ch) && ch!=EOF) minus = (ch == '-'? -1 : minus),ch= (char) getchar_unlocked();

  if(ch==EOF) return false;
  while (isdigit(ch))  result = result*10 + (int) (ch - '0'),ch = (char) getchar_unlocked();
  
  result *= minus;
  return ch;
}
template<typename T>
inline void WRITEn(T x) {
  if (x < 0) {putchar_unlocked('-'); x = -x; }
  char writeBuffer[20], *writePtr = writeBuffer;
  do {
    *writePtr++ = (char)('0' + x % 10);
    x /= 10;
  }
  while (x);
  do  { putchar_unlocked(*--writePtr); }
  while (writePtr > writeBuffer);
}
inline bool Read_CHAR(char &c)
{
  char READ_CHARACTER = (char)getchar_unlocked();
  while ((READ_CHARACTER == '\n' || READ_CHARACTER == '\t' || READ_CHARACTER == ' ')) READ_CHARACTER = (char)getchar_unlocked();
  if(READ_CHARACTER == EOF) return false;
  c = READ_CHARACTER;
  return true;
} 
inline bool READ_CHAR_ARRAY(char *x) {
  char READ_CHARACTER = (char)getchar_unlocked();
  while ((READ_CHARACTER == '\n' || READ_CHARACTER == '\t' || READ_CHARACTER == ' ')) READ_CHARACTER = (char)getchar_unlocked();
  if(READ_CHARACTER == EOF) return false;
  char *ptr = &x[0];
  while ((READ_CHARACTER != '\n' && READ_CHARACTER != '\t' && READ_CHARACTER != ' ' && READ_CHARACTER != EOF)) *ptr++ = READ_CHARACTER, READ_CHARACTER = (char)getchar_unlocked();

  *ptr = '\0';
  return true;
}
inline void WRITE_CHAR_ARRAY(const char *x) {
  while(*x != '\0')
    putchar_unlocked(*x++);
}
inline void WRITE_STRING(string &x) {
  for(char c: x) 
    putchar_unlocked(c);
}
template<typename T>
inline bool READ_DOUBLE(T &x) {
  double y;
  if(scanf("%lf", &y) == EOF) return false;
  x = y;
  return true;
}
template <typename T>
inline void WRITE_DOUBLE(T x) {
  printf("%.15f", (double)x);
}

const ll OOl = 1e18 ;
const int N = 1e6+1,OO = 1e9,OOm = 0x3f3f3f3f, MOD = 1e9 + 7;
int freq[N];
ll sum;
int main()
{
 
  int n; 
  READn(n);
  for(int i=0;i<n;++i)
  {
    int x;READn(x);
    freq[x]++;
    sum+=x;
  }
  int q;READn(q);
  while(q--)
  {
    ll pre,val;
    READn(pre),READn(val);
    sum += (val-pre)*freq[pre];
    freq[val]+=freq[pre];
    freq[pre] = 0;
    WRITEn(sum);
    WRITE_CHAR('\n');
  }
  return 0; 
}