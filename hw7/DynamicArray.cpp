//
//  DynamicArray.cpp
//  hw7
//
//  Created by Дима on 13.09.23.
//

#include "DynamicArray.hpp"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S];
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}
DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    if (ptr != 0)
    {
        delete[] ptr;
    }
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output()
{
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i] <<"\t";
    }
    cout << "\n---------------------------------\n";
}

void DynamicArray:: reSize(int Newsize){
    int* newArray = new int[size + Newsize];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = ptr[i];
    }
    
    
    for (int i = size; i < size + Newsize; i++)
    {
        newArray[i] = 0;
    }
    delete[] ptr;
    ptr = newArray;
    size += Newsize;
    
}

void DynamicArray:: sort(){
    int change;
    
        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i; j++){
                if(ptr[j] > ptr[j + 1]){
                    change = ptr[j];
                    ptr[j] = ptr[j + 1];
                    ptr[j + 1] = change;
                }
            }
        }
    
}

int DynamicArray:: search(int a){
    int index = 0;
    for (int i = 0; i < size; i++) {
          if (ptr[i] == a) { // Сравниваем элементы на равенство с a
              index = i;
              break;
          }
      }
      return index;
  }

//
//void DynamicArray:: reverse(){
//    int newArray[size];
//    int k = size;
//    for(int i = 0; i < size; i++){
//        newArray[i] = ptr[k];
//        k--;
//    }
//    delete[] ptr;
//    ptr = newArray;
//}


void DynamicArray:: reverse(){
    int* newArray = new int[size];
    int help = size - 1;
    for(int i = 0; i < size; i++){
        newArray[i] = ptr[help];
        help--;
    }
    cout << "reversed" << endl;
    cout << endl;
    delete[] ptr;
    ptr = newArray;
   
}



int * DynamicArray::GetPointer()
{
    return ptr;
}
int DynamicArray::GetSize()
{
    return size;
}
