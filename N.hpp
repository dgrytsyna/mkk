//
//  N.hpp
//  zav25
//
//  Created by Діана on 10.05.2022.
//

#ifndef N_hpp
#define N_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class N{
    int x, y;
public:
    N(int xx, int yy):x(xx), y(yy){};
    N(){};
    N& operator++(int notused);//постфіксна форма
    N& operator++();//префіксна
    void print();
    N operator-(N& obj2);
    void operator[](int index);
    N& operator()(int j);
    friend ostream& operator<<(ostream& cout, N& n);
    friend N operator+(int x, N& n);
    friend N operator+(N& n1, N& n2);
    N& operator+=(int x);
    bool operator<(N& n);
};
#endif /* N_hpp */
