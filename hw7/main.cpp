//
//  main.cpp
//  hw7
//
//  Created by Дима on 13.09.23.
//

#pragma once
#include "DynamicArray.hpp"
#include <iostream>
using namespace std;


DynamicArray GetObj() //‚ÓÁ‚‡Ú ÔÓ ÁÌ‡˜ÂÌË˛
{
    DynamicArray obj(3);
    obj.Input();

    return obj;
}
int main()
{
    DynamicArray a(5); // constructor 1 param
    a.Input();
    a.Output();
    DynamicArray b = a; // copy constructor
    b.Output();

    DynamicArray rezult = GetObj();

//    a.reSize(2);
//    a.Output();
//    a.sort();
//    a.Output();
    cout << "искомый индекс: " << a.search(7) << endl;
    a.reverse();
    a.Output();
}
