#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int low = 1;
    int high = 100;
    int attempts = 0;
    char response;

    cout << "zagadai chislo ot 1 do 100 a ia poprobuu ugadat za 7 popitok." << endl;
    cout << "Otwechai: '>' esli moe chislo menshe tvoego," << endl;
    cout << "'<' если больше," << endl;
    cout << "'=' если я угадал." << endl;
    while (low <= high && attempts < 7) {
        int mid = (low + high) / 2;
        cout << "eto " << mid << "? (> < = : ";
        cin >> response;
        if (response == '=') {
            cout << "ura! ia ugadal chislo za " << attempts++ << endl;
            break;
        }
        else if (response == '>') {
            low = mid + 1;
        }
        else if (response == '<') {
            high = mid - 1;
        }
        else {
            cout << "neverni vvod. ispoluui tolko '>' '<' ili '='." << endl;
            continue;
        }
        attempts++;
    }
    if (attempts >= 7) {
        cout << " ia ne smog ugadat chislo" << endl;
    }
     return 0;
}






