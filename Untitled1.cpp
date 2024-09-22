#include <iostream>
using namespace std;

int main() {
    float balance, total_cost = 0.0, surcharge, vat;
    int water_units;

    
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;

    cout << "Enter the number of water units consumed: ";
    cin >> water_units;

    
    if (water_units <= 10) {
        total_cost = water_units * 150;  
    } 
    else if (water_units <= 20) {
        total_cost = (10 * 150) + (water_units - 10) * 175;  
    } 
    else {
        total_cost = (10 * 150) + (10 * 175) + (water_units - 20) * 200;  
    }

    surcharge = total_cost * 0.15;
    total_cost += surcharge;
    
    vat = total_cost * 0.18;
    total_cost += vat;

    if (balance >= total_cost) {
        balance -= total_cost;  
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: " << balance << " UGX" << endl;
    } 
    else {
        cout << "Error: Insufficient balance!" << endl;
        cout << "Your remaining balance is: " << balance << " UGX" << endl;
    }

    return 0;
}

