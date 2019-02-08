#include <iostream>
using namespace std;

double tax;
double income;
/**
 * Calculate the total federal tax payable by a Canadian resident on a
 * given amount of taxable income.
 *
 * @param   income    taxable income [$] @pre >= 0
 *
 * @returns           the total federal tax payable
 */

double federalTax (double income)
{
 if (income <= 46605)
    {
    tax = 0.15 * income;
    }
            else if (income <= 93208)
            {
            tax = (.205 * (income - 46605)) + 6990.75; 
            }
                else if (income <= 144489)
                {
                tax = (0.26 * (income - 93208)) + 6990.75 + 9553.62;
                }
                          else if (income <= 205842)
	                        {
	                        tax = (0.29 * (income - 144489)) + 6990.75 + 9553.62 + 13333.06;
	                        }
	                            else
	                            {
	                            tax = (0.333*(income - 205842)) + 6990.75 + 9553.61 + 13333.06 + 17792.37;
	                            }
// each integer represents the taxes summmed from the previous tax bracket// 
return tax;
}




    main ()
    {
      cout << "What is you income? ";
      cin >> income;
      federalTax (income);
      cout << "your  yearly taxes are: " << tax;
    }
    
