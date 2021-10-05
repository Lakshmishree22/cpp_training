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
        if(amt<0.0){
           std::cout<<"Cannot deposit a negative value"<<std::endl;
        }
        else{
            Balance+=amt;
            std::cout<<"Deposit successfull!! Available Balance="<<Balance<<std::endl;
        }
    }

   int BankAccount::withdraw(double amt){
       if(amt<0){
           std::cout<<"Cannot withdraw a negative value"<<std::endl;
       }
       else if(amt<Balance){
           Balance=Balance-amt;
           std::cout<<"Withdraw successfull!! Available Balance="<<Balance<<std::endl;
           return 0;
       }
   }
   
   void BankAccount::creditInterest(){
       if(Balance>0){
           Balance=Balance+(Balance*(InterestRate/1200));
           std::cout<<"Interest credited!! Available Balance="<<Balance<<std::endl;
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
            this->FirstName=FirstName;
            std::cout<<"First name is changed to "<<FirstName<<std::endl;
       }
       else{
          std::cout<<"Ensure to input proper last name"<<std::endl;
       }

   }