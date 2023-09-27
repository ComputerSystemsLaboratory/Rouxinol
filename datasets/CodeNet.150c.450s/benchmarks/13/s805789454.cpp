#include<iostream>
#include<string>
using namespace std;

void init(string* s, string* p, int* s_len, int* p_len, string* buf){
  cin >> *s;
  cin >> *p;
  *s_len = s->length();
  *p_len = p->length();
  buf->erase();
}

int main(){

  string s;
  string p;
  string buf;
  int s_len;
  int p_len;
  int buf_len=0;
  bool flg=false;
  
  init(&s, &p, &s_len, &p_len, &buf);
  
  for(int i=0;i<s_len;i++)
    {
      for(int j=0;j<p_len;j++)
        {
          buf_len = i+j;
          if(buf_len>=s_len)
            {
              buf_len%=s_len;
            }
          buf+=s.at(buf_len);
        }
      if(buf == p)
        {
          flg = true;
        }
      buf.erase();
    }

  if(flg==true)
    {
      cout << "Yes" << endl;
    }
  else
    {
      cout << "No" << endl;
    }
}