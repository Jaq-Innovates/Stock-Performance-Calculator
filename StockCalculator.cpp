// StockCalculator.cpp : Write a program that calculates 
// the gains/losses generated by a stock investment after buying and selling shares on the stock market through the iTrade online broker platform.


#include <iostream>

using namespace std;

// Constants
const double ITRADE_COMMISSION_PERCENT = 2.0 / 100.0;  // 2% commission rate

int main() {
    // Input data
    string company_name = "Apple Inc.";
    string company_symbol = "APPL";
    int num_shares = 100;
    float buy_price_per_share = 150.05;
    float sell_price_per_share = 313.10;

    // Calculate total cost and total proceeds
    double total_cost = num_shares * buy_price_per_share;
    double total_proceeds = num_shares * sell_price_per_share;

    // Calculate commission paid
    double commission_paid = (total_cost + total_proceeds) * ITRADE_COMMISSION_PERCENT;

    // Calculate gains/losses
    double gains = total_proceeds - total_cost - commission_paid;
    double percentage_gains_losses = (gains / (total_cost + commission_paid)) * 100.0;
    double gains_percent = gains / total_cost * 100;

    // Display the report
    cout << "Stock Investment Performance Calculator...." << endl;
    cout << "Company Name and symbol: " << company_name << company_symbol <<  endl;
    cout << "Number of Shares: " << num_shares << endl;
    cout << "Cost per Share at Buying: $" << buy_price_per_share << endl;
    cout << "Price per Share : $" << sell_price_per_share << endl;
    cout << "Realized Gains/Losses: " << endl;
    cout << "-------------------------" << endl;
    cout << "\nTotal Cost: $"<< total_cost << endl;
    cout << "Total Proceeds: $" << total_proceeds << endl;
    cout << "Commission Paid: $"<< commission_paid << endl;
    cout << "Gains/Losses: " << gains << "(" << gains_percent << "%)" << endl;

    return 0;
}

