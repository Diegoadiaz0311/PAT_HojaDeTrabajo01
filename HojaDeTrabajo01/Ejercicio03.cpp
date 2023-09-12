#include "Ejercicio03.h"
#include <cmath>

bool Ejercicio03::isPowerOfTwo(int n)
{
    if (n == 1 || n == -1) {
        return true;
    }

    if (std::abs(n) < 1 || std::abs(n) % 2 != 0) {
        return false;
    }

    return isPowerOfTwo(std::abs(n)/2);
}
