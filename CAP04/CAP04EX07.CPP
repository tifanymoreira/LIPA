//CAP04EX07.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
   for (int i = 10; i >= 1; --i)
    cout << "i = " << setw(2) << i << endl;

   cout << endl;

   cout << "Tecle <ENTER> para encerrar...";
   cin.get();
   return 0;
}
