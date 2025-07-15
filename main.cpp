#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
srand(time(0));
     int player, computer;
     cout << "Enter number of players: ";
     cout << "enter 0 - rock 1 - scissors 2 - paper" << endl;
     cout << "vash vybor: ";
     cin >> player;

          if (player < 0 || player > 2) {
               cout << "Invalid input. Try again." << endl;
               return 1;
          }

          computer = rand() % 3;
          cout << "copmuter vibral: ";
          switch (computer) {
               case 0: cout << "rock" << endl;
               case 1: cout << "scissors" << endl;
               case 2: cout << "paper" << endl;
          }
          switch (player) {
               case 0:
                    switch (computer) {
                    case 0:   cout << "Nichya!" << endl; break;
                    case 1: cout << "player win!" << endl; break;
                    case 2: cout << "computer win!" << endl; break;
                    }
                    break;
               case 1:
                    switch (computer) {
                    case 0: cout << "computer win!" << endl; break;
                    case 1: cout << "Nichya!" << endl; break;
                    case 2: cout << "player win!" << endl; break;
                    }
                    break;
               case 2:
                    switch (computer) {
                    case 0: cout << "player win!" << endl; break;
                    case 1: cout << "computer win!" << endl; break;
                    case 2: cout << "Nichya!" << endl; break;
                    }
                    break;
          }



     return 0;
}






