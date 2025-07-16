#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
vector<int> sieveOfEratosthenes(int n) { // Программа для вычесление простых чисел путем Решето
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);

        }
    }
    return primes;
}
void printPrime(int lim) {
                int index = 0;
                vector<int> primes;

                cout << "prostie chisla ot 1 do " << lim << endl;
                for (int i = 2; i <= lim; ++i, ++index) {
                    if ((i)) {
                        primes.push_back(i);
                    }
                }
                for (int x : primes) {
                    cout << x << endl;
                }
                cout << endl;
            }
int main() {
        int n;
        cin >> n;
        if (n <= 1) {
            cout << "нет простого числа" << endl;
            return 0;
        }

        vector<int> primes = sieveOfEratosthenes(n);
        cout << "Простые числа до " << n << ": ";
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << endl;
        return 0;


}