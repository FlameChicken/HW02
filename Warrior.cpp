#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname)
    : Player(nickname)
{
    job_name = "Àü»ç";
    power += 15;
    defence += 10;
}

void Warrior::attack() {
    cout << "°ËÀ» ÈÖµÎ¸¨´Ï´Ù!" << endl;
}