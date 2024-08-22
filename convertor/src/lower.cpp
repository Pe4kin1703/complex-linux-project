#include <iostream>
#include <string>
#include <algorithm>
#include "lower.hpp"

using namespace std;

string toLower(const string& str)
{
    string result = str;
    transform(str.begin(), str.end(), result.begin(), ::tolower);
    return result;
}