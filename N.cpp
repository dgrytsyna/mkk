//
//  N.cpp
//  zav25
//
//  Created by Діана on 10.05.2022.
//

#include "N.hpp"
#include <iostream>
using namespace std;
N& N::operator++(int notused){
    (*this).x++;
    (*this).y++;
    return (*this);
}
N& N::operator++(){
    cout<<"Prefix operator ";
    (*this).x++;
    (*this).y++;
    return (*this);
}
void N::print(){
    cout<<x<<" "<<y<<endl;
}
N N::operator-(N& obj2){
    N var;
    var.x = x - obj2.x;
    var.y = y - obj2.y;
    return var;
}
void N::operator[](int index){
    cout<<"Hello";
    cout<<x<<endl;
}
N& N::operator()(int j){
    cout<<"operator() "<<j<<endl;
    (*this).x--;
    return (*this);
}
ostream& operator<<(ostream& cout, N& n){
    cout<<"operator<< : "<<n.x<<" / "<<n.y<<endl;
    return cout;
}
N operator+(int x, N& n){
    N n2;
    n2.x = x + n.x;
    n2.y = x + n.y;
    return n2;
}
N operator+(N& n1, N& n2){
    N n3;
    n3.x = n1.x + n2.x;
    n3.y = n1.y + n2.y;
    return n3;
}
N& N::operator+=(int x){
    (*this).x += x;
    return (*this);
}
bool N::operator<(N& n){
    if(x<n.x) return true;
    else return false;
}

