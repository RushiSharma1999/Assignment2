#include "person.cpp"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;


void readData(Person employees[], int N)
{


  string fName;
	string lName;
	float pay;
	float hours;
	string line;
  int i = 0;

  ifstream file("input.txt");

  if(file.is_open())
    {
      file >> fName;
      while(!inFile.eof())
      {
        file >> lName >> rate >> hours;
        getline(file, line);
        employees[i].setFirstName(fName);
        employees[i].setLastName(lName);
        employees[i].setPayRate(rate);
        employees[i].setHoursWorked(hours);
        i++;
        file >> fName;

      }
      inFile.close();


}

void writeData(Person employees[], int N)
{


  string fullName;
  float total;

  ofstream file("output.txt");

  	if(file.is_open())
  	{
  		for(int i = 0; i < N; i++)
  		{
  			Name = employees[i].fullName();
  			Pay = employees[i].totalPay();
  			file << Name << " " << Pay << endl;
  			cout << Name << " " << Pay << endl;
  		}
  		file.close();
  }

}


int main()
{

  int N = 0;
  Person emloyees[N];
  string fName, lName;
	float rate, hours;
  readData(employees, 6);
  writeData(employees, 6);


return 0;


}
