#include <iostream>
using namespace std;

class ThisKeywordExample {
    int x;
    int y;

public:
    // Constructor
    ThisKeywordExample(int x, int y) {
        this->x = x; //
    }
    int main(){
        ThisKeywordExample t(10, 20);
        
        
    }