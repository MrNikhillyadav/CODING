#include <iostream>
using namespace std;
#include "fraction.cpp"

int main() {

 Fraction f1(10, 3);
 Fraction f2(20, 4);
 
 f1.add(f2);
 f1.print();
 f2.print();

 f1.multiply(f2);
 f1.print();
 f2.print();


}