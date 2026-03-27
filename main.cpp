
#include <iostream>
#include "big_integer.h"

int main() {
    BigInteger a("123");
    BigInteger b("45");
    BigInteger c("-77");

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    a += b;
    std::cout << "123 += 45 -> " << a << std::endl;

    a = BigInteger("123");
    a += c;
    std::cout << "123 += -77 -> " << a << std::endl;

    a = BigInteger("-123");
    a += BigInteger("77");
    std::cout << "-123 += 77 -> " << a << std::endl;

    a = BigInteger("77");
    a += BigInteger("-77");
    std::cout << "77 += -77 -> " << a << std::endl;

    return 0;
}