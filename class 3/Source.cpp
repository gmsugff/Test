//¹5)
#include <iostream>

using namespace std;
#include"LinkedList.h"
#include"Stack.h"
#include"Queue.h"
int main()
{
    LinkedList2 <int> ll2;
    Stack<int>s;
    Queue<int>q;
    ll2.app(34);
    ll2.app(3);
    ll2.app(14);
    ll2.pop(34);
    ll2.reverse();
    ll2.display();

    s.push(23);
    s.push(3);
    s.push(53);
    s.pop();
    s.reverse();
    s.Size();
    s.print();
    
   cout<< q.back()<<endl;
   cout<<q.front()<<endl;
    q.push(67);
    q.pop();
    q.Size();
    q.reverse();
    q.print();

}