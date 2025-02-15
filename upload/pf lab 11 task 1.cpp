#include<iostream>
using namespace std;
struct product{
	int code;
	string description;
	char packaging;
	float price;
	float discount;
};
int main()
{
	product products[10]={
	        {101, "Laptop", 'L', 1200.0, 10.0},
        {102, "Tablet", 'S', 55.0, 5.0},
        {103, "Mobile", 'M', 800.0, 20.0},
        {104, "Monitor", 'L', 600.0, 15.0},
        {105, "Keyboard", 'L', 277.0, 10.0},
        {106, "Mouse", 'S', 150.0, 5.0},
        {107, "Headphones", 'L', 400.0, 20.0},
        {108, "Speaker", 'L', 677.0, 10.0},
        {109, "Charger", 'M', 300.0, 5.0},
        {110, "Printer", 'L', 1000.0, 25.0}
    };
    cout << "Products with Large packaging and net price between 200 and 1000:\n";
    for (int i = 0; i < 10; i++) {
        if (products[i].packaging == 'L') {
            float netPrice = products[i].price * (1 - products[i].discount / 100);
            if (netPrice >= 200 && netPrice <= 1000) {
                cout << "Code: " << products[i].code
                     << ", Description: " << products[i].description
                     << ", Packaging: " << products[i].packaging
                     << ", Original Price: $" << products[i].price
                     << ", Discount: " << products[i].discount << "%"
                     << ", Net Price: $" << netPrice << endl;
            }
        }
    }
}
