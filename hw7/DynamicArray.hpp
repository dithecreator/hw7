//
//  DynamicArray.hpp
//  hw7
//
//  Created by Дима on 13.09.23.
//

#ifndef DynamicArray_hpp
#define DynamicArray_hpp

#include <stdio.h>


#pragma once
#include "DynamicArray.hpp"


#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
    int * ptr; // ÛÍ‡Á‡ÚÂÎ¸ Ì‡ ‰ËÌ‡Ï. Ï‡ÒÒË‚
    int size;  // ‡ÁÏÂ Ï‡ÒÒË‚‡
public:
    DynamicArray();
    DynamicArray(int);
    DynamicArray(const DynamicArray&); // copy constructor
    ~DynamicArray();
    void Input();// rand
    void Output();// ‚˚‚Ó‰ Ì‡ ÍÓÌÒÓÎ¸
    void reSize(int);
    void sort();
    int search(int);
    void reverse();
    int * GetPointer();
    int GetSize();

    // ÂËÎËÁÓ‚‡Ú¸ ÒÎÂ‰Û˛˘ËÂ ÏÂÚÓ‰˚:
    //void ReSize(int size);// ËÁÏÂÌÂÌËÂ ‡ÁÏÂ‡ Ï‡ÒÒË‚‡
    //void Sort();// ÒÓÚËÓ‚Í‡(Î˛·ÓÈ ‡Î„ÓËÚÏ ÒÓÚËÓ‚ÍË)
    //int Search(int a); // ÔÓËÒÍ ˝ÎÂÏÂÌÚ‡ ‚ Ï‡ÒÒË‚Â, ‚ÓÁ‚‡˘‡ÂÚ ËÌ‰ÂÍÒ Ì‡Ë‰ÂÌÌÓ„Ó ˝Î., ÎË·Ó -1.
    //void Reverse(); // ÔÂÂÁ‡ÔËÒ˚‚‡ÂÚ ÔÓÒÎÂ‰Ó‚‡ÚÂÎ¸ÌÓÒÚ¸ ˝ÎÂÏÂÌÚÓ‚ ‚ Ó·‡ÚÌÓÏ ÔÓˇ‰ÍÂ, Ì‡ÔÏÂ 12345 -> 54321



};

#endif /* DynamicArray_hpp */
