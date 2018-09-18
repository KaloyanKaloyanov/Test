// Computer Programming, XB_40011, Fall 2018
// Vrije Universiteit, Amsterdam
//
// (GRADED) Assignment 1.2 "Rectangle"
// 
// Submit this assignment to Canvas!
// By doing so you declare to comply to the regulations as stated
// on the page on "Ethical behaviour and fraud" in the course's
// Canvas site.
//
// Student name   : Kaloyan Kaloyanov
// Student number : 2623242
// VUnet-id       : kkv210
//
// Fill in your details above,
// then enter your code below this header.
//

#include <iostream>
#include <cmath>

int main(){
  
  int length, width;
  std::cout << "Please enter the length and width of the rectangle: ";
  std::cin >> length >> width;
  
  std::cout << "The perimeter: " << 2 * (length + width);
  std::cout << " area: " << length * width;
  std::cout << " and diagonal: " << sqrt((length * length) + (width * width));
  
  return 0;
}