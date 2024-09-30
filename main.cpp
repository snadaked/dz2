
#include "parser.h"
#include "solver.h"
#include <string>

using namespace std;

int main(void) {
    string input_file = "data.txt";
    Parser parser(input_file);
    parser.read();

    Solver solver(0.001, 0.75);
    solver.init_gen(50);

    for (int i = 0; i < 100; i++) {
        solver.solve();
    }

    return 0;
}
