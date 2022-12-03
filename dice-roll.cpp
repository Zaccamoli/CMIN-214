#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main()
{

   srand((unsigned) time(0));

   double total_number_of_rolls { };
   double total_number_of_twenties { };
   int again                    { };

   while (true)
   {
      int number_of_rolls { };
      int roll            { };

      do
      {
         roll = rand() % 20 + 1;

         std::cout << roll << ' ';

         number_of_rolls++;
      }
      while (roll != 20);
      std::cout << "\t(number of rolls): " << number_of_rolls << "\n\n";

      total_number_of_rolls += number_of_rolls;

      total_number_of_twenties += 1;

      std::cout << "Test your abilities. (Enter your stat's total and press enter, press 0 to finish your roll): ";
      std::cin >> again;
      std::cout << '\n';

      if (again == 0) { break; }
   }

   std::cout << "Total number of CRITs: " << total_number_of_twenties << '\n';
   std::cout << "Total number of rolls: " << total_number_of_rolls << '\n';
   std::cout << "Average number of rolls: " << total_number_of_rolls / total_number_of_twenties << '\n';
}