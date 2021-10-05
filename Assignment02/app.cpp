#include <iostream>
#include "BankApplication.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    BankAccount b1("Lakshmi","shree","$123",22,200.0,10.0);
    b1.show();
}