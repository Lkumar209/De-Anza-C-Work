#include <iostream>
#include <iomanip>    
using namespace std;

int main() {
    string itemName;
    double itemPrice;
    int itemQuantity;
    char isGift;
    string description;
    cout << "Please enter the name of the item: ";
    getline(cin, itemName);
    cout << "Please enter the price for each item: ";
    cin >> itemPrice;
    cout << "Please enter the quantity: ";
    cin >> itemQuantity;
    cout << "Is this a gift? (Y/N) ";
    cin >> isGift;
    cin.ignore();  
    cout << "Please enter the description of the occasion: ";
    getline(cin, description);

    double subtotal = itemPrice * itemQuantity;
    double tax = subtotal * 0.1;
    double total = subtotal + tax;
  
    cout << endl << "========== RECEIPT ==========" << endl;
    cout << "Name:" << "       " << itemName << endl;
    cout << "Price:" << "      $" << fixed << setprecision(2) << itemPrice << endl;
    cout << "Quantity:" << "   " << itemQuantity << endl;
    cout << "Subtotal:" << "   $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax:" << "        $" << fixed << setprecision(2) << tax << endl;
    cout << "Total:" << "      $" << fixed << setprecision(2) << total << endl;
    cout << "Gift (y/n):" << " " << isGift << endl;
    cout << "Occasion:" << "  " << description << endl;
    cout << "============================" << endl;
    return 0;
}
