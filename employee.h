#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "printable.h"

class Employee : public Printable
{
public:
    Employee();
    Employee(std::string name, unsigned int number, std::string homeAdress,
             unsigned int payment, unsigned int fromYear);
    void print()const;
    std::string name()const;
    unsigned int number()const;
    std::string homeAdress()const;
    unsigned int payment()const;
    unsigned int fromYear()const;

    void setName(std::string name);
    void setNumber(unsigned int number);
    void setHomeAdress(std::string homeAdress);
    void setPayment(unsigned int payment);
    void setFromYear(unsigned int fromYear);
private:
    std::string mName;
    unsigned int mNumber;
    std::string mHomeAdress;
    unsigned int mPayment;
    unsigned int mFromYear;
};

#endif // EMPLOYEE_H
