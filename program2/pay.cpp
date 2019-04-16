#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <vector>
#include "person.cpp"

using namespace std;


int readData(vector<Person> &employees, int &N)
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
        employees.emplace_back(fName, lName, rate, hours);
        i++;
        inFile >> fName;
      }
    }
      inFile.close();
    return i;

}

void writeData(vector<Person> &employees, int num)
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
  vector<Person> employees;
  readData(employees, N);
	num = readData(employees,N);
	writeData(employees, num);
  system("read -p 'Press Enter to continue...' var");
return 0;


}
