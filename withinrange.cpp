#include <iostream>
#include <vector>


template <typename t> bool inrange(t x1, t x2, t y1, t y2) {
    if (x1 > x2) {
        if (y1 > x1 and y2 < x2) return true;
        else if (y2 <x1 and y2 >x2) return true;
        else return false;
    }
    else if (x1 == x2) {
        if (x1 == y1 or x1 == y2) return true;
        else return false;
    }


};
int main()
{


    if (inrange<float>(1, -5, 2, -7)) {
        std::cout << "col\n";
    }
    else {
        std::cout << "no \n";
    }
    
    std::cout << "Hello Rangefinder!\n";
    // 1 -5 and 2 -7
    
}

//version 1
// bool inrange(T x1, T x2 = x1, T x3, T x4){
//if (x1 == x3 || x2 == x3 || x1 == x4 || x2 == x4) return true;
//else if (x1 > x2) {
//    if (x3<x1 and x3>x2||x3==x1||x3==x2) return true;
//    else if (x4<x1 and x4 >x2) return true;
//}
//else if (x2 > x1) {
//    if (x3<x2 and x3>x1) return true;
//    else if (x4<x2 and x4 >x1 || x4 == x1 || x4 == x2) return true;
//}
//else {
//    return false;
//}
//}