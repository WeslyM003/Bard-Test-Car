#include <iostream>

using namespace std;

class Car {
public:
    int wheels;
    int windows;
    int doors;
    double weight;
    double height;
    double length;
    double width;
    int horsepower;
    int top_speed;
    string make;
    string model;

    Car() {
        wheels = 4;
        windows = 5;
        doors = 4;
        weight = 1000;
        height = 5;
        length = 10;
        width = 5;
        horsepower = 200;
        top_speed = 120;
        make = "Chevy";
        model = "Cruise";

    }

    void print_details() {
        cout << "I have a " << make << " ";
        cout << model << endl;

        cout << "It has " << wheels << " wheels, ";
        cout << windows << " windows and ";
        cout << doors << " doors. ";
        cout  << "It weighs " << weight << " pounds ";
        cout << "It is " << height << " feet tall, ";
        cout << length << " feet long, ";
        cout << "and " << width << " feet wide, ";
        cout << "It has " << horsepower << " horsepower ";
        cout << "and its top speed is " << top_speed << " miles per hour. " << endl;
    }
};

int main() {
    Car my_car;

    my_car.print_details();

    return 0;
}