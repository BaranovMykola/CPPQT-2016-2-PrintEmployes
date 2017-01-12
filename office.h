#ifndef OFFICE_H
#define OFFICE_H
#include "printable.h"
#include <string>

class Office : public Printable
{
public:
    Office();
    Office(std::string name, std::string adress, unsigned int square, unsigned int employeers);
    std::string setName(std::string name);
    std::string setAdress(std::string adress);
    unsigned int setSquare(unsigned int square);
    unsigned int setEmployeers(unsigned int employeers);
    void print() const;
private:
    std::string mName;
    std::string mAdress;
    unsigned int mSquare;
    unsigned int mEmployeers;
};

#endif // OFFICE_H
