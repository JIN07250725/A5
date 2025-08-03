// ------------- FILE HEADER -------------
// Author: Yusong Jin
// Assignment: 5
// Date: July 29
// Description: Calculate pizza requirements and costs
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 5
// Participation: 100%
// Challenge: 100%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): https://www.asciitable.com/


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   cout << "Welcome to my Pizza Party Statistics program!\n\n";
   
   int totalParties = 0;
   int totalPizzas = 0;
   int maxPeople = 0;
   double maxTotalCost = 0.0;
   char continueInput;
    
   do {
       cout << "Enter the number of people, average number of slices per person, "
            << "and the cost of a pizza separated by a space: ";
             
       int people;
       double slicesPerPerson, pizzaCost;
       cin >> people >> slicesPerPerson >> pizzaCost;
        
       int pizzas = ceil(people * slicesPerPerson / 8);
        
       double cost = pizzas * pizzaCost;
       double tax = cost * 0.07;
       double delivery = (cost + tax) * 0.20;
       double totalCost = cost + tax + delivery;
        
       cout << fixed << setprecision(2);
       cout << "\nNumber of pizzas: " << pizzas << endl;
       cout << "Cost of pizzas:  $" << cost << endl;
       cout << "Tax:             $" << tax << endl;
       cout << "Delivery:        $" << delivery << endl;
       cout << "Total Cost:      $" << totalCost << "\n\n";
        
       totalParties++;
       totalPizzas += pizzas;
       if (people > maxPeople) maxPeople = people;
       if (totalCost > maxTotalCost) maxTotalCost = totalCost;
        
       cout << "Do you want to enter more (y/n): ";
       cin >> continueInput;
       cout << endl;
   }
   while (continueInput == 'y' || continueInput == 'Y');
    
   double avgPizzas = static_cast<double>(totalPizzas) / totalParties;
    
   cout << fixed << setprecision(1);
   cout << "Number of entries: " << totalParties << endl;
   cout << "Total number of pizzas: " << totalPizzas << endl;
   cout << "Average number of pizzas: " << avgPizzas << endl;
   cout << fixed << setprecision(2);
   cout << "Maximum number of people: " << maxPeople << endl;
   cout << "Maximum cost of pizzas: $" << maxTotalCost << "\n\n";
    
   cout << "Thank you for using my program!\n";
    
   return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: Pizza Party Statistics program

Program Description: Calculate pizza requirements and costs

Design:
A. INPUT
Define the input variables including name data type.
int people;  
double slicesPerPerson;    
double pizzaCost;         
char continueInput;  

B. OUTPUT
Define the output variables including data types. 
int pizzas;
double cost;
double tax;
double delivery;
double totalCost;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
pizzas = static_cast<int>(ceil((people * slicesPerPerson) / 8));
cost = pizzas * pizzaCost;
tax = cost * 0.07;
delivery = (cost + tax) * 0.20;
totalCost = cost + tax + delivery;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 

BEGIN
1. Display welcome message
2. Initialize accumulator variables:
   totalParties = 0
   totalPizzas = 0
   maxPeople = 0
   maxTotalCost = 0.0
3. Begin do-while loop:
   a. Prompt user for: Enter number of people, average slices per person, pizza cost
   b. Read input values
   c. Calculate pizzas needed (using ceil function: (people × slicesPerPerson) / 8)
   d. Calculate pizza cost (pizzas × pizzaCost)
   e. Calculate sales tax (7%)
   f. Calculate delivery charge ((cost + tax) × 0.20)
   g. Calculate total cost (cost + tax + delivery)
   h. Output current party pizza information
   i. Update accumulators:
         totalParties += 1
         totalPizzas += pizza count
         Update maxPeople if needed
         Update maxTotalCost if needed
   j. Ask user to continue
4. When user finishes:
   a. Calculate average pizzas per party
   b. Display statistics:
      - Total parties
      - Total pizzas
      - Average pizzas (1 decimal)
      - Max people
      - Max total cost
5. Display goodbye message
END


SAMPLE RUNS
Copy from assignment document.
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!
*/