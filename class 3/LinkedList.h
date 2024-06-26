#pragma once
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    std::shared_ptr < Node> next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
template<typename L>
class LinkedList2
{
private:
    std::shared_ptr < Node> head;
public:
    LinkedList2()
    {
        head = nullptr;
    };

    void app(int data) {
        std::shared_ptr < Node> newNode = make_shared <L>(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            std::shared_ptr < Node> curr = head;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    void pop(int data) {
     
        std::shared_ptr < Node>curr = head;
        std::shared_ptr < Node>prev = nullptr;

            while (curr != nullptr && curr->data != data) {
                prev = curr;
                curr = curr->next;
            }

            if (curr == nullptr) {
                std::cout << "nullptr" << std::endl;
                return;
            }

            if (prev == nullptr) {
                head = curr->next;
            }
            else {
                prev->next = curr->next;
            }

            delete curr;
        
    }
    void reverse() {
        std::shared_ptr < Node> prev = nullptr;
        std::shared_ptr < Node> curr = head;
        std::shared_ptr < Node> next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    void display() {
        std::shared_ptr < Node> curr = head;
        while (curr != nullptr)
        {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
    }
};