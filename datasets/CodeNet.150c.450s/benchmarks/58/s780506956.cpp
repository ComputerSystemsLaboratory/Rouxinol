#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
#include<sstream>
using namespace std;

double Calc();

int main(int argc,char* argv[]){
  double ans;

  ans=Calc();

  printf("%.0lf\n",ans);
  return 0;
}

double Calc(){
  stringstream ss;
  string str;
  stack<double> sdnum;

  getline(cin,str);
  ss<<str;

  for(;;){
    double x1,x2;

    str="";
    ss>>str;
    if(str=="")
      break;

    if(str=="+" || str=="-" || str=="*"){
      x1=sdnum.top();sdnum.pop();
      x2=sdnum.top();sdnum.pop();


      if(str=="+")
	sdnum.push(x2+x1);
      else if(str=="-")
	sdnum.push(x2-x1);
      else
	sdnum.push(x2*x1);
    }
    else{
      stringstream sstmp;
      sstmp<<str;
      sstmp>>x1;
      sdnum.push(x1);
    }

  }
  return sdnum.top();
}