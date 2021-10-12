#include <iostream>
#include <thread>
#include <string>
using namespace std;

void Fact_n(int &n,int &f){

    auto id= this_thread::get_id();

    cout<<"thread started:"<<id<<endl;

   for(f = 1; n > 1; n--)
      f *= n; 

    cout<<"thread ends:"<<endl;
}


int main(int argc, char const *argv[])
{
    int n=4,f=0,r=3,f_n_r=0;
    auto t1=thread(Fact_n,n,f);
    auto t2=thread(Fact_n,n-r,f_n_r);
    
    int npr=f/f_n_r;

    cout<<"n="<<"r="<<r<<"npr="<<npr<<endl;
    
    t1.join();
    t2.join();
    
    cout<<"["<<this_thread::get_id()<<"]:"<<"thread finished"<<endl;


    return 0;
}