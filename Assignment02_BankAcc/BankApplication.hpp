
#include <iostream>
#include <string>


class BankAccount
{

private:
    std::string FirstName,LastName;
    std::string Password;
    int AccNum;
    double Balance;
    double InterestRate;

public:
    BankAccount(std::string FirstName,std::string LastName,std::string Password,int AccNum,double Balance,double Interestrate){
        this->FirstName=FirstName;
        this->LastName=LastName;
        this->Password=Password;
        this->AccNum=AccNum;
        this->Balance=Balance;
        this->InterestRate=InterestRate;
    }

    int set(std::string Name,std::string oldPassword,std::string Newpassword);
    int deposit(double amt);
    int withdraw(double amt); 
    void creditInterest();
    void show();
    int changeName(std::string FirstName,std::string LastName);
};