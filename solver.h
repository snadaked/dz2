
#ifndef SOLVER_H
#define SOLVER_H

class Solver {
public:
    Solver(double precision, double factor);
    void init_gen(int population);
    void solve();
private:
    double precision_;
    double factor_;
    int population_;
};

#endif
