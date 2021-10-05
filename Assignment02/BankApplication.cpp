#include <iostream>
#include <string>
#include "BankApplication.hpp"


using namespace std;

    int BankAccount::set(string Name,string oldPassword,string Newpassword){
    if(this->Password.compare(oldPassword)==0){
            Password=Newpassword;
            return 0;
        }
        else{
            return -1;
        }
    }

    int BankAccount::deposit(double amt){
        if(amt<0){
           return -1;
        }
        else if(Balance<amt){
            return 1;
        }
        else{
            Balance+=amt;
            return 0;
        }
    }

   int BankAccount::withdraw(double amt){
       if(amt<0){
           return -1;
       }
       else if(amt<Balance){
           Balance=Balance-amt;
           return 0;
       }
   }
   
   void BankAccount::creditInterest(){
       if(Balance>0){
           Balance+=(Balance*InterestRate/1200);
       }
   }
   void BankAccount::show(){
       std::cout<<"Account Details"<<std::endl
       <<"Account Number:"<<AccNum<<std::endl
       <<"Name:"<<FirstName<<" "<<LastName<<std::endl
       <<"Balance:"<<Balance<<std::endl;
   }

   int BankAccount::changeName(string FirstName,string LastName){

       if(this->LastName.compare(LastName)==0){
            this->LastName=LastName;
       }
       else{
           return -1;
       }
        this->FirstName=FirstName;
   }