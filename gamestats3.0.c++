#include <iostream>
using std:: endl;
using namespace std;

int main(){
    const int Alien_Point = 150;
    int alienkilled = 10;
    int score = alienkilled * Alien_Point;
    cout << " score: " << score << endl;

    enum difficulty { Novice, Easy, Normal, Hard};
    difficulty Mydifficulty = Easy;

    enum ship { ship1 = 100, ship2 = 200, ship3 = 1600};
    ship myship = ship1;
    cout << "\nTo upgarde my ship to a Ship 3 will cost " << (ship3 - myship) << " Resource Points.\n";
    return 0;
}
