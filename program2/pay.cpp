#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "person.cpp"

using namespace std;


int readData(Person employees[], int &N)
{


  string fName, lName;
  float rate, hours;
	string line;
  int i = 0;

  ifstream inFile;

  inFile.open("input.txt");

  if(inFile.is_open())
    {
      inFile >> fName;
      while(!inFile.eof())
      {
        inFile >> lName;
        inFile >> rate;
        inFile >> hours;
        getline(inFile, line);
        employees[i].setFirstName(fName);
        employees[i].setLastName(lName);
        employees[i].setPayRate(rate);
        employees[i].setHoursWorked(hours);
        i++;
        inFile >> fName;
      }
    }
      inFile.close();
    return i;

}

void writeData(Person employees[], int num)
{


  string Name;
  float Pay;
  ofstream inFile;
  inFile.open("output.txt");

  	if(inFile.is_open())
  	{
  		for(int j = 0; j < num; j++)
  		{
  			Name = employees[j].fullName();
  			Pay = employees[j].totalPay();
  			inFile << Name << " " << Pay << endl;
  			cout << Name << " " << Pay << endl;
  		}
      inFile.close();
  }

}


int main()
{

  int N = 20;
  int num;
  Person employees[N];
  readData(employees, N);
  num = readData(employees, N);
  writeData(employees, num);
//system("read -p 'Press Enter to continue...' var");
return 0;


}
