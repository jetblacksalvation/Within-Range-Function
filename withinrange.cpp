#include <iostream>
template<typename T>

bool inrange(T x1, T x2, T x3, T x4) {//this function will return true if var 1 to xar 2 are within range of var 3 to var 4
    //will not pass an error if the char is equal lol 

    if (x1 == x3 || x2 == x3 || x1 == x4 || x2 == x4) return true;
    else if (x1 > x2) {
        if (x3<x1 and x3>x2||x3==x1||x3==x2) return true;
        else if (x4<x1 and x4 >x2) return true;
    }
    else if (x2 > x1) {
        if (x3<x2 and x3>x1) return true;
        else if (x4<x2 and x4 >x1 || x4 == x1 || x4 == x2) return true;
    }
    else {
        return false;
    }
    

}

int main()
{
    std::cout << "Hello Rangefinder!\n";
    // 1 -5 and 2 -7
    if (inrange<int>(1, 2, 3, 7) == true) {
        std::cout << "set a is within set b\n";
    }
    else {
        std::cout << "not\n";
    }
}
