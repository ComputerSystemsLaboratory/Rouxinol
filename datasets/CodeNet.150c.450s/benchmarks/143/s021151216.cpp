// #include<map>
#include<unordered_map>
#include<iostream>
#include<vector>
void stupid(){
    int N;
    std::unordered_map<long long,long long>cnts;
    int Q;
    std::vector<std::vector<int> >converts;
    long long sum;
    std::cin>>N;
    for(int i=0;i<N;++i){
        int buf;
        std::cin>>buf;
        cnts[buf]++;
    }
    std::cin>>Q;
    converts=std::vector<std::vector<int> >(Q,std::vector<int>(2));
    for(int i=0;i<Q;++i){
        std::cin>>converts[i][0]>>converts[i][1];
    }
    sum=0;
    for(auto itr=cnts.begin();itr!=cnts.end();++itr){
        sum+=itr->first * itr->second;
    }
    for(int i=0;i<Q;++i){
        auto itr1=cnts.find(converts[i][0]);
        if(itr1!=cnts.end()){
            cnts[converts[i][1]]+=itr1->second;
            sum+=(converts[i][1]-itr1->first)*itr1->second;
            std::cout<<sum<<std::endl;
            cnts.erase(itr1);
        }else{
            std::cout<<sum<<std::endl;
        }
    }
}
int main(){
    stupid();
    return 0;
}