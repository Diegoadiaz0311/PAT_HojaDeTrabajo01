#include "Ejercicio02.h"
#include <algorithm>
#include <string>

bool Ejercicio02::isPalindrome(string& s)
{
    if (s.length() <= 1) {
        return true;
    }


    if (s[0] != s[s.length() - 1]) {
        return false;
    }

    std::string s2 = s.substr(1, s.length() - 2);

    return isPalindrome(s2);
}
