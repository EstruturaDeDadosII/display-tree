//
// Created by thiago on 5/28/2018.
//

#ifndef DISPLAY_TREE_STACK_H
#define DISPLAY_TREE_STACK_H

#include <stack>
#include <iostream>
using namespace std;

template<class T> //T - símbolo aqui associado a qq tipo genérico
class Stack : public stack <T> {//Implementa a função pop de uma pilha para o tipo genérico T
public:
    T pop() {
        T tmp = stack<T>::top();
        stack<T>::pop();
        return tmp;
    }
};

#endif //DISPLAY_TREE_STACK_H
