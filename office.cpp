#include "office.h"

#include <iostream>

Office::Office()
{

}

Office::Office(std::string name, std::string adress, unsigned int square, unsigned int employeers):
    mName(name),
    mAdress(adress),
    mSquare(square),
    mEmployeers(employeers)
{

}

std::string Office::setName(std::string name)
{
    mName = name;
}

std::string Office::setAdress(std::string adress)
{
    mAdress = adress;
}

unsigned int Office::setSquare(unsigned int square)
{
    mSquare = square;
}

unsigned int Office::setEmployeers(unsigned int employeers)
{
    mEmployeers = employeers;
}

void Office::print()const
{
    std::cout << "Name: " << mName << std::endl << "Adress: " << mAdress << std::endl << "Square: " << mSquare
           << std::endl << "Employeers: " << mEmployeers << std::endl;
}
