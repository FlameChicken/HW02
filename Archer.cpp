#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname)
    : Player(nickname)
{
    job_name = "궁수";
    accuracy += 20;
    speed += 10;
}

void Archer::attack() {
    cout << "화살을 발사합니다!" << endl;
}