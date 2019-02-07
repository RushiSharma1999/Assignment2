#include <iostream>

using namespace std;


void reverseArray (double *a, int size)
{


	for (double* end = a+size-1; a < end; ++a, --end)
	{
        double temp = *a;
        *a = *end;
        *end = temp; 	
	}


}

int main () 
{

	int size = 0; 
 	double array[size]; 
  	int current_size = 0;
	cout << "Enter the size of the matrix:: " ;
	cin >> size;

  /*INPUT*/
  double input;
  while ((cin >> input) && (current_size < size))
    array[current_size++] = input; //Braces were wrong and caused problems

  /*REVERSE*/
  reverseArray (array, current_size); 

  /*OUTPUT*/
  std::cout << "Reversed input is: ";
  for(int i = 0; i < current_size; ++i)
  {
        std::cout << array [i] << ' ';
  }

   
       system("read -p 'Press Enter to continue...' var");
        return 0;
}


