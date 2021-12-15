#include <iostream>
#include "persona.h"
#include "array.h"
#include "arrayTemplate.h"
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

    Persona p1("Gianni");
    Persona p2("Elisa");
    cout << massimo(p1, p2) << endl;

    MyArray a1(5);
    a1.init();
    a1[13] = 6;
    cout << a1[17] << endl;

    MyArrayTemp<double> a2(100);
    a2[25] = 3.1415;
    cout << a2[25] << endl;

    MyArrayTemp<Persona> ap(5);
    ap[0] = Persona("Ugo");
    ap[1] = Persona("Maria");
    //out << ap[1] << endl;

    cout << ap << endl;

} 