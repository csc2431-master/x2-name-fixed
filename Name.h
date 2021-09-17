//
// Interface Definition for the Name Class
// Author: Max Benson
// Date: 07/25/2021
//

#ifndef NAME_H
#define NAME_H

#include <iostream>
using std::ostream;

class Name {
public:
    Name(const char* first, const char* last);

    //Rule of Three
    ~Name();
    Name(const Name&);
    const Name& operator=(const Name rhs);
    //

    const char* First() const;
    const char* Last() const;

    friend ostream& operator<<(ostream& os, const Name& name) {
        os << "First: " << name._first << ", Last: " << name._last;
        return os;
    }

private:
    char* _first;
    char* _last;
};


#endif //NAME_H
