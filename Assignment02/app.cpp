#include <iostream>
#include "BankApplication.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    BankAccount b1("Lakshmi","shree","$123",22,200.0,10.0);
    b1.show();

    b1.deposit(20);
    b1.deposit(-1);

    b1.withdraw(10);
    b1.withdraw(-1);

    b1.creditInterest();

    b1.changeName("shweta","shree");
    b1.changeName("nag","sudha");
}