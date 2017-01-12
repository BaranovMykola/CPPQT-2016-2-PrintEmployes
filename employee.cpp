#include "employee.h"

#include <iostream>

Employee::Employee()
{

}

Employee::Employee(std::string name, unsigned int number, std::string homeAdress, unsigned int payment, unsigned int fromYear):
    mName(name),
    mNumber(number),
    mHomeAdress(homeAdress),
    mPayment(payment),
    mFromYear(fromYear)
{

}

void Employee::print() const
{
       std::cout << "Name: " << mName << std::endl << "Number: " << mNumber << std::endl << "Home adress: " << mHomeAdress <<
                 std::endl << "Payment: " << mPayment << std::endl << "Works from " << mFromYear << " year" << std::endl;
}

std::string Employee::name() const
{
    return mName;
}

unsigned int Employee::number() const
{
    return mNumber;
}

std::string Employee::homeAdress() const
{
    return mHomeAdress;
}

unsigned int Employee::payment() const
{
    return mPayment;
}

unsigned int Employee::fromYear() const
{
    return mFromYear;
}

void Employee::setName(std::string name)
{
    mName = name;
}

void Employee::setNumber(unsigned int number)
{
    mNumber = number;
}

void Employee::setHomeAdress(std::string homeAdress)
{
    mHomeAdress = homeAdress;
}

void Employee::setPayment(unsigned int payment)
{
    mPayment = payment;
}

void Employee::setFromYear(unsigned int fromYear)
{
    mFromYear = fromYear;
}
