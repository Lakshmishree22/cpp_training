#include <iostream>

struct Triangle{ 

double s1,s2,s3; 
}; 


int main(int argc, char const *argv[])
{
 double s1=3,s2=4,s3=12;

    if(s1+s2>s3 &&   s2+s3>s1 && s3+s1>s2){
        cout<<"is a valid traingle="<<endl;
    }
    else{
        cout<<"is not valid traingle="<<endl;
        return 0;
    }


    Triangle t3={s1,s2,s3};

    return 0;
}
