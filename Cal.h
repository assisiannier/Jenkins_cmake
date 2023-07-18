#pragma once
#include<iostream>

template<class T>
class Cal{
public:
    Cal(T char1, T char2):a(char1), b(char2){}
    ~Cal(){}
    void addT(){
        std::cout<<"value"<<a+b<<std::endl;
    }
private:
    T a;
    T b;
};