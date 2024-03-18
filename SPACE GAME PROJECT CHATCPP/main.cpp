#include "inc/Events/events.h"
#include "inc/Ship/shipgenerator.h"
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(nullptr));
    shipGenerator shipGenerate;
    shipGenerator::addNewShip();
    return 0;
}


