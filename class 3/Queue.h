#pragma once
template<typename Q>
class Queue {
    std::shared_ptr<int> arr;
    int size = 0;
public:
    void push( Q newelement) {
        std::shared_ptr<Q> tmp = make_shared<Q>(this->size + 1);
        for (int i = 0; i < this->size - 1; i++) {
            tmp[i] = this->arr[i];

        }
        tmp[this->size + 1] == newelement;
        this->arr.swap(tmp);
        this->size++;
    }


    void pop( ) {
        if (this->siz < 0) {
            cout << "nullptr";
        }
        else {
 std::shared_ptr<Q> tmp = make_shared<Q>(this->size - 1);
        for (int i = 1; i < this->size - 1; i++) {
            tmp[i] = this->arr[i];

        }
        this->arr.swap(tmp);
        this->size--;
        }
       

    }

        Q  front() {
        return this->arr[0]
   }
        Q back() {
            return this->arr[this->size];
        }
        void reverse() {
            std::shared_ptr<Q> tmp = make_shared<Q>(this->size);
            for (int i = size; i <0; i--) {
                tmp[i] = arr[i];
                
            }
            delete[]arr;
            arr = tpm;
        }
        void print() {

            for (int i = 0; i < this->size; i++) {

                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
        void Size() {
            cout << this->size;
        }
};