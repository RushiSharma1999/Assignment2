#include <iostream>

using namespace std;


int reverseArray (int array[], int n)
{
        for (int i = 0; i < n; i++)     
        {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                return temp;
        }

        
}

int main () 
{

        int array[4] = { 1, 2, 3, 4};
        cout << reverseArray( array, 4) << endl;
      
        
        system("read -p 'Press Enter to continue...' var");
        return 0;
}


