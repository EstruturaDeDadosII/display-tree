//
// Created by thiago on 5/28/2018.
//

#ifndef DISPLAY_TREE_QUEUE_H
#define DISPLAY_TREE_QUEUE_H

#include <queue>
#include <iostream>
using namespace std;

template<class T>
class Queue : public queue<T> {//Implementa a função dequeue de uma fila para o tipo genérico T
public:
    T dequeue() {
        T tmp = queue<T>::front();
        queue<T>::pop();
        return tmp;
    }
    void enqueue(const T& el) {//Implementa a função enqueue de uma fila para o tipo genérico T
        push(el);
    }
};

#endif //DISPLAY_TREE_QUEUE_H
