#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname)
    : Player(nickname)
{
    job_name = "도적";
    speed += 20;
    accuracy += 15;
}

void Thief::attack() {
    cout << "재빠르게 단검을 찌릅니다!" << endl;
}