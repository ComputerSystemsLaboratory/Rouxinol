#include<iostream>
#include<map>

int main()
{
  std::map<std::string,int> count;
  std::string run;
  int maxlen=0;
  std::string maxstr;
  while(std::cin>>run)
  {
    if(run.size()>maxlen)
    {
      maxlen = run.size();
      maxstr = run;
    }
    if(count.find(run)!=count.end())
      ++count[run];
    else
      count[run]=0;
  }
  std::map<int,std::string> rcount;
  std::map<std::string, int>::iterator itr;
  for(itr=count.begin();itr!=count.end();++itr)
    rcount.insert(std::pair<int,std::string>(itr->second,itr->first));
  std::map<int,std::string>::iterator print=rcount.end();;
  std::cout<<(--print)->second<<" "<<maxstr<<std::endl;
  return 0;
}