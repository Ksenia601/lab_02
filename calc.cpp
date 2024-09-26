#include <iostream>

using namespace std;

int main() {

  int a, b, op;   double result;

  cout << "Введіть перше число\n";   cin >> a;

  cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";  cin >> op;

  cout << "Введіть друге число\n";     cin >> b;

  switch(op) {

    case 1:     // code

                    result = a + b;  break;

    case 2:    // code

                    result = a - b;  break;

    case 3:     // code

                    result = a * b;  break;

    case 4:     // code

                    result = a / b(double);  break;

  }

  cout << "Результат = " << result;

}








#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введіть число a: ";
    std::cin >> a;
    std::cout << "Введіть степінь b: ";
    std::cin >> b;

    double result = pow(a, b);
    std::cout << a << " у степені " << b << " = " << result << std::endl;

    return 0;
}
