#include <iostream>
#include <vector>
template<typename T>

bool inrange(std::vector<T>list,std::vector<T>list2 ) {//takes unsorted lists, maybe i should sort?
    //will not pass an error if the char is equal lol 

    for (int x = 0; x < list.size(); x++) {
        std::cout << list[x] << " is value and slot is " << x << std::endl; 
    }
    return false;

}//i want to make a "set" class, and also make a bunch of functions for that 
std::vector<double> nrij = {
    10,10,10,10,100
};
int main()
{
    std::cout << "Hello Rangefinder!\n";
    // 1 -5 and 2 -7
    
}

//version 1
// bool inrange(T x1, T x2, T x3, T x4){
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