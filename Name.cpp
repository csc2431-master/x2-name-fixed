//
// Implements the Name Class
// Author: Max Benson
// Date: 07/25/2021
//

#include <string.h>
#include "Name.h"

Name::Name(const char* first, const char* last) {
    _first = new char[strlen(first)+1];
    strcpy(_first,first);
    _last = new char[strlen(last)+1];
    strcpy(_last,last);
}

// Rule of Three
Name::~Name() {
    delete[] _first;
    delete[] _last;
}

Name::Name(const Name& other) {
    Name copy(other._first, other._last);

    _first = copy._first;
    _last = copy._last;
    copy._first = nullptr;
    copy._last = nullptr;
}

const Name& Name::operator=(const Name rhs) {
    if (this != &rhs) {
        Name copy(rhs);
        char *swap;

        swap = _first;
        _first = copy._first;
        copy._first = swap;
        swap = _last;
        _last = copy._last;
        copy._last = swap;
    }
    return *this;
}

const char* Name::First() const {
    return _first;
}

const char* Name::Last() const {
    return _last;
}
