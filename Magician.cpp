#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname)
    : Player(nickname)
{
    job_name = "마법사";
    MP += 30;
    power += 20;
}

void Magician::attack() {
    cout << "마법 화살을 쏩니다!" << endl;
}