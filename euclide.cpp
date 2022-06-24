#include <iostream>
#include <sstream>
#include <string>

int gcd(int a, int b);

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cout << argc << " arguments received.\n" << "2 arguments expected.\n";
        return 1;
    }

    std::stringstream aChar{ argv[1] };
    std::stringstream bChar{ argv[2] };

    int a{}, b{};
    
    if (!(aChar >> a)) {
        a = 0;
    }

    if (!(bChar >> b)) {
        b = 0;
    }

    std::cout << "PGCD(" << argv[1] << ", " << argv[2] << ") = " << gcd(a, b);

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int t{ b };
        b = a % b;
        a = t;
    }
    return a;
}