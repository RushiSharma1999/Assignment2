#include "person.h"



Person::Person(string fName, string lName, float rate, float hours)
{
  firstName = fName;
  lastName = lName;
  payRate = rate;
  hoursWorked = hours;
};

void Person::setLastName(string lName)
{
  lastName = lName;
}

string Person::getLastName()
{
  return lastName;
}

void Person::setFirstName(string fName)
{
  firstName = fName;
}

string Person::getFirstName()
{
    return firstName;
}

void Person::setPayRate(float rate)
{
  payRate = rate;
}

float Person::getPayRate()
{
  return payRate;
}

void Person::setHoursWorked(float hours)
{
  hoursWorked = hours;
}

float Person::getHoursWorked()
{
  return hoursWorked;
}

float Person::totalPay()
{
  float Pay;
  Pay = hoursWorked * payRate;
  return Pay;
}

string Person::fullName()
{
  string Name;
  Name = firstName + " " + lastName;
  return Name;
}
