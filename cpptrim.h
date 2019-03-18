#ifndef CPPTRIM
#define CPPTRIM
#include <string>

namespace cpptrim
{

// C++ std::isspace defines whitespace characters for the "C" local as any of
// the following:
// '  ' (0x20) space (SPC)
// '\t' (0x09) horizontal tab (TAB)
// '\n' (0x0a) newline (LF)
// '\v' (0x0b) vertical tab (VT)
// '\f' (0x0c) feed (FF)
// '\r' (0x0d) carriage return (CR)
static char const* spacechars = " \t\n\v\f\r";

void trim_left(std::string& str) {
    str.erase(0, str.find_first_not_of(spacechars));
}

void trim_right(std::string& str) {
    str.erase(str.find_last_not_of(spacechars) + 1);
}

void trim(std::string& str) {
    trim_left(str);
    trim_right(str);
}

} // !namespace cpptrim
#endif // !CPPTRIM
