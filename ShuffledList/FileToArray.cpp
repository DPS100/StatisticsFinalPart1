#include <iostream>
#include <string>
#include <fstream>

/*
Turns a file of numbers seperated by newlines into a file representing an array of the same numbers.
*/
int main(int argc, char** argv) {
    if(argc < 2) {
        std::cerr << "Missing argument 1: In file name\n";
    }
    if(argc < 3) {
        std::cerr << "Missing argument 2: Out file name\n";
        return 1;
    }
    std::ifstream in(argv[1]);
    std::string s = "{";
    std::string line;
    while(in >> line) {
        s.append(line);
        s.append(",");
    }
    s.erase(s.length() - 1, 1); // Remove trailing comma
    s.append("}");
    std::ofstream out(argv[2]);
    out << s;
    in.close();
    out.close();
}