#include <iostream>
#include <string>
#include <algorithm>
#include "upper.hpp"

using namespace std;

string toUper(const string& str)
{
    string result = str;
    transform(str.begin(), str.end(), result.begin(), ::toupper);
    return result;
}