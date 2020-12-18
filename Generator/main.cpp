#include "generator.h"
#include <iostream>
#include "experiments.h"

int main() {
    int Count = 10000000;
    unsigned *V = new unsigned[Count];
    run_experiments_for(V, Count, randomize, 10, 100);
    return 0;
}
