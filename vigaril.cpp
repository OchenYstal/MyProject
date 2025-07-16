#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() { //Программа для решение квадратичного уравнение

   double a, b, c;
      cout << "Введите 3 значения: " << endl;
      cin >> a >> b >> c;
      if (a == 0) {
         cout << "neza tak delat!!!" << endl;
      }
      cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
      double Res = sqrt((b * b)) + 4 * a * c; //Возводит в квадрат
      cout << "D = " << b << "^2 + " << "4 * " << a << " * " << c << " = " << Res << endl;
      double squareR = sqrt(Res);
      cout << "x1 = " << "-b + √D / 2a = " << b << " + " << squareR << " / 2 * " << a << " = " << b + squareR / 2 * a << endl;
      cout << "x2 = " << "-b - √D / 2a = " << b << " + " << squareR << " / 2 * " << a << " = " << b - squareR / 2 * a << endl;

   return 0;
}