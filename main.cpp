#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class cars{
public:
    string make;
    string model;
    string size;
    double price;
    int year;
    cars(string a, string b, string c, double d, int e){
        make = a;
        model = b;
        size = c;
        price = d;
        year = e;
    }
};

void date(){
    int day, month, year;
    bool date = true;
    while(date == true) {
        cout << "Enter day of rental (dd): ";
        cin >> day;
        cout << "Enter month of rental (mm): ";
        cin >> month;
        cout << "Enter year of rental (yyyy): ";
        cin >> year;
        if(day > 0 and day < 32){
            if(month > 0 and month < 13) {
                if(year > 2022){
                    date = false;
                }else{ cout<<"PLease enter valid year later then 2022\n";}
            }else{ cout<<"PLease enter valid month between 1 and 12\n";}
        }else{ cout<<"PLease enter valid day between the 1st and 31st\n";}
    }
}
double price_range() {
    double price;
    bool cost = true;
    while (cost == true) {
        cout << "Enter price range (per day): $";
        cin >> price;
        if (price >= 40) {
            cost = false;
            return price;
        }else {
                cout << "Minimum price per day is $40.00\n";
            }
        }
    }
void receipt(double total) {
    string first_name, last_name;
    int age;
    cout << "Enter renter first name: ";
    cin >> first_name;
    cout << "Enter renter last name: ";
    cin >> last_name;
    cout << "****************************************\n";
    cout << "Enter age of renter: ";
    cin >> age;
    if (age < 25) {
        cout << "Sorry, minimum age for rental is 25\n";
        exit(1);
    }
    total = total;
    double taxes = round(total * 0.16 * 100) / 100, service = 9.00;
    double final = total + taxes + service;
    total = round(total * 100) / 100;
    cout << "\n--RECEIPT--\n" << "Customer Name: " << first_name << " " << last_name << endl << "Subtotal: $" << total << endl;
    cout << "Tax: $" << taxes << endl;
    cout << "Service Fee: $" << service << endl;
    cout << "Total: $" << final;
}
double add_on(){
    char answer;
    cout<<"Would you like to add accident coverage for only $21.99?\n";
    cout<<"Includes:"<<endl<<"-Theft"<< endl<<"-Rental vehicle damage"<<endl<<"-Injury/property damage to others";
    cout<<endl<<"(y/n): ";
    cin>>answer;
    if(answer == 'y' or answer == 'Y'){
        double total = 21.99;
        return total;
    }
}
int main() {
    cars car1("Kia", "Optima", "Sedan", 40.00, 2019);
    cars car2("Chevy", "Malibu", "Sedan", 50.00, 2018);
    cars car3("Toyota", "RAV4", "SUV", 55.00, 2020);
    cars car4("Mazda", "CX-5", "SUV", 70.00, 2020);
    cars car5("Tesla", "Model-3", "Sport", 80.00, 2021);
    cars car6("Ford", "Mustang", "Sport", 90.00, 2022);
    cout << "Welcome to your car rental service\n";
    date();
    int rental_days;
    cout<< "Please enter amount of days you would like to rent for: ";
    cin>>rental_days;
    double price = price_range();
    bool option1 = true, option2 = true, option3 = true, option4 = true, option5 = true, option6 = true;
    cout << "\n--AVAILABLE CARS--\n";
    if (price >= car1.price) {
        cout << "Year: " << car1.year << endl << "Make: " << car1.make << endl << "Model: " << car1.model << endl
             << "Price per day: $" << car1.price << endl << endl;
        option1 = false;
    }
    if (price >= car2.price) {
        cout << "Year: " << car2.year << endl << "Make: " << car2.make << endl << "Model: " << car2.model << endl
             << "Price per day: $" << car2.price << endl << endl;
        option2 = false;
    }
    if (price >= car3.price) {
        cout << "Year: " << car3.year << endl << "Make: " << car3.make << endl << "Model: " << car3.model << endl
             << "Price per day: $" << car3.price << endl << endl;
        option3 = false;
    }
    if (price >= car4.price) {
        cout << "Year: " << car4.year << endl << "Make: " << car4.make << endl << "Model: " << car4.model << endl
             << "Price per day: $" << car4.price << endl << endl;
        option4 = false;
    }
    if (price >= car5.price) {
        cout << "Year: " << car5.year << endl << "Make: " << car5.make << endl << "Model: " << car5.model << endl
             << "Price per day: $" << car5.price << endl << endl;
        option5 = false;
    }
    if (price >= car6.price) {
        cout << "Year: " << car6.year << endl << "Make: " << car6.make << endl << "Model: " << car6.model << endl
             << "Price per day: $" << car6.price << endl << endl;
        option6 = false;
    }
    string choice;
    double total = 0;
    bool choice_a = true;
    while(choice_a == true){
        cout << "Enter make of car you would like to rent: ";
        cin >> choice;
        if (choice == car1.make or choice == "kia") {
            if(option1 == false){
            total += car1.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        } else if (choice == car2.make or choice == "chevy") {
            if(option2 == false){
                total += car2.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        } else if (choice == car3.make or choice == "toyota") {
            if(option3 == false){
                total += car3.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        } else if (choice == car4.make or choice == "mazda") {
            if(option4 == false){
                total += car4.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        } else if (choice == car5.make or choice == "tesla") {
            if(option5 == false){
                total += car5.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        } else if (choice == car6.make or choice == "ford") {
            if(option6 == false){
                total += car6.price;
            choice_a = false;}
            else{cout<<"PLease enter one of the cars listed\n";}
        }else{
            cout<<"Please enter valid input\n";
        }
    }
    total = total * rental_days;
    total += add_on();
    receipt(total);
    return 0;
}