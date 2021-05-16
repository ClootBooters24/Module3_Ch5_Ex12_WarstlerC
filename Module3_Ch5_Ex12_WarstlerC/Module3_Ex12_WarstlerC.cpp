#include <iostream>
using namespace std;
int main()
{
	double item1 = 0.0;
	double item2 = 0.0;
	double itemDiscount = 0.0;
	double totalOwed = 0.0;
	const double discount = 0.5;

	cout << "Enter the price of item one: ";
	cin >> item1;
	cout << "Enter the price of item two: ";
	cin >> item2;
	
	if (item1 > item2) {
		itemDiscount = item2 * discount;
		totalOwed = item1 + itemDiscount;
	}
	else if (item1 < item2) {
		itemDiscount = item1 * discount;
		totalOwed = item2 + itemDiscount;
		}
	else if (item1 == item2) {
		itemDiscount = item2 * discount;
		totalOwed = item1 = itemDiscount;
	}

	cout << "Your total balance is $" << totalOwed << endl;

}