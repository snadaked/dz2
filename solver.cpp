
#include "solver.h"
#include <iostream>

Solver::Solver(double precision, double factor) : precision_(precision), factor_(factor), population_(0) {}

void Solver::init_gen(int population) {
    population_ = population;
    std::cout << "Initialized with population: " << population_ << std::endl;
}

void Solver::solve() {
    std::cout << "Solving with precision: " << precision_ << " and factor: " << factor_ << std::endl;
}
