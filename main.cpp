#include <iostream>
using namespace std;

//al posoto di fare questo
//int massimo(int x, int y);
//float massimo(float x, float y);

template <typename T> T massimo(T x, T y){
    if(x < y) return y; 
    else return x;
}

int main() {
    int a = 2, b = 5;
    cout <<  massimo(a, b) << endl;

    float c = 3.14, d = 0.02;
    cout << massimo(c, d) << endl;
} 