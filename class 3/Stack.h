#pragma once
#include <iostream>

using namespace std;
template<typename T>
class Stack {
    std::shared_ptr<int> arr;
    int size = 0;
public:


    void push( T newelement) {
        std::shared_ptr<T> tmp = make_shared<T>(this->size + 1);
        for (int i = 0; i < this->size - 1; i++) {
            tmp[i] = this->arr[i];

        }
        tmp[this->size + 1] == newelement;
        this->arr.swap(tmp);
       this->size++;
    }


    void pop() {

        std::shared_ptr<T> tmp = make_shared<T>(this->size - 1);
        for (int i = 0; i < size - 1; i++) {
            tmp[i] = this->arr[i];

        }
        this->arr.swap(tmp);
        this->size--;

    }
    void reverse() {
        std::shared_ptr<T> tmp = make_shared<T>(this->size);
        for (int i = size; i < 0; i--) {
            tmp[i] = arr[i];

        }
        delete[]arr;
        arr = tpm;
    }
    void print(){

        for (int i = 0; i < this->size; i++) {

            cout << this->arr[i]<<" ";
        }
        cout << endl;
    }
    void Size() {
        cout <<this-> size;
    }
};

