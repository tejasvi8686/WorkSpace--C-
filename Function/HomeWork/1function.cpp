#include <iostream>

using namespace std;

float areaOfCircle(float radius) {
  float area = 3.14 * radius * radius;
  return area;
}

int main() {
  float radius, area;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  area = areaOfCircle(radius);

  cout << "The area of the circle is: " << area << endl;

  return 0;
}
