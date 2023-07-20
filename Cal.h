#pragma once
#include<iostream>

template<class T>
class Cal{
public:
    Cal(T char1, T char2):a(char1), b(char2){}
    ~Cal(){}
    T addT(){
        std::cout<<"value"<<a+b<<std::endl;
        return a+b;

    }
private:
    T a;
    T b;
};