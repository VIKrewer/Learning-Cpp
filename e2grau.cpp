#include <cmath>
#include <iostream>
#include <limits>
#include <numeric>

using namespace std;

void convertToFraction(double num, int &numerator, int &denominator) {
  const double tolerance = 1e-9;
  double intpart;

  if (modf(num, &intpart) == 0.0) {
    numerator = static_cast<int>(intpart);
    denominator = 1;
    return;
  }

  double fracpart = num - intpart;
  denominator = 1;

  while (fabs(fracpart * denominator - round(fracpart * denominator)) >
         tolerance) {
    denominator++;
  }

  numerator =
      static_cast<int>(round(fracpart * denominator) + intpart * denominator);
  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}

int main() {
  double x1;
  double x2;
  double a;
  double b;
  double c;
  double discriminant;
  int oneortwo;

  cout << "Enter A value (A cannot be zero) >> ax²\n";
  cin >> a;

  if (abs(a) < numeric_limits<double>::epsilon()) {
    cout << "Error: A cannot be zero." << endl;
    return 1;
  }

  cout << "Enter B value >> bx\n";
  cin >> b;

  cout << "Enter C value >> c\n";
  cin >> c;

  discriminant = pow(b, 2) - (4 * a * c);

  if (discriminant < 0) {
    cout << "The equation has complex number solutions." << endl;
    return 1;
  }

  x1 = (-b + sqrt(discriminant)) / (2 * a);
  x2 = (-b - sqrt(discriminant)) / (2 * a);

  int num1, den1, num2, den2;
  convertToFraction(x1, num1, den1);
  convertToFraction(x2, num2, den2);

  if (den1 == 1) {
    cout << "x1 = " << num1 << endl;
  } else {
    cout << "x1 = " << num1 << "/" << den1 << endl;
  }

  if (den2 == 1) {
    cout << "x2 = " << num2 << endl;
  } else {
    cout << "x2 = " << num2 << "/" << den2 << endl;
  }

  char div;
  cout << "Do you want to divide any of the results?";
  cin >> div;

  switch (div) {
  case 'y':
    cout << "Which one of the result do you want to divide\n";
    cout << "(1) " << num1 << "/" << den1 << " or "
         << "(2) " << num2 << "/" << den2 << endl;

    cin >> oneortwo;
    switch (oneortwo) {
    case 1:
      cout << "The result is: " << (double)num1 / (double)den1;
      break;

    case 2:
      cout << "The result is: " << (double)num2 / (double)den2;
      break;

    default:
      cout << "Select (1) or (2)!";
      break;
    }
  }
  return 0;
}
