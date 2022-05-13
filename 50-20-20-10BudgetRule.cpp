#include <iostream>
#include <iomanip>

int main()
{
    // Variable declaration and initialization

    double revenue = 0;      // my income
    double needs = 0;        // expenditures for things that I need (the lower you can get this, the better)
    double savings = 0;      // savings and debt repayments
    double investments = 0;  // money for investments
    double wants = 0;        // discretionary income

    // Explanation of the 50-20-20-10 rule

    std::cout << "\nThe 50-20-20-10 rule states that you\nshould allocate 50% "
                << "of your income for your needs, 20%\nfor savings and debt "
              << "repayments, 20% for investments, and\n10% for wants.\n";


    // Retrieve user's revenue
    std::cout << "\nPlease enter your revenue amount: $";
    std::cin >> revenue;
    std::cout << "\n";

    // Calculations

    needs = revenue * 0.50;      // This is floating point arithmetic; you could also use
                                 // needs = revenue * 50 / 100


    savings = revenue * 0.20;


    investments = revenue * 0.20;


    wants = revenue * 0.10;


    // Display output

    std::cout << "\nAllocation of revenue\n"
                << "Needs: $" << std::setprecision(6) << needs << "\n"
                << "Savings: $" << std::setprecision(6) << savings << "\n"
                << "Investments: $" << std::setprecision(6) << investments << "\n"
                << "Wants: $" << std::setprecision(6) << wants << "\n";


    return 0;

}
