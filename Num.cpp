#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int n) {// вычисление простых чисел
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) {
            return false;
        }
    return true;
}
void printPrime(int lim) {
    int index = 0;
    vector<int> primes;

    cout << "prostie chisla ot 1 do " << lim << endl;
    for (int i = 2; i <= lim; ++i, ++index) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    for (int x : primes) {
        cout << x << endl;
    }
    cout << endl;
}
int main() {
    printPrime(100);
    int max;
    cout << "Vvedite max num dlya poiska prostyh chisel: ";
    cin >> max;

    printPrime(max);

    return 0;
}