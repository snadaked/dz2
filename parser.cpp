
#include "parser.h"
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

Parser::Parser(const std::string& input_file) : input_file_(input_file) {}

void Parser::split_input(const string line, string & sv, string & sw) const {
    stringstream str(line);
    str >> sv >> sw;
}

void Parser::read() {
    ifstream file(input_file_);
    string line;
    while (getline(file, line)) {
        string sv, sw;
        split_input(line, sv, sw);
        cout << "Parsed: " << sv << ", " << sw << endl;
    }
}
