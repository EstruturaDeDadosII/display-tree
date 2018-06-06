//
// Created by thiago on 5/28/2018.
//

#ifndef DISPLAY_TREE_BSTNODE_H
#define DISPLAY_TREE_BSTNODE_H

template<class T>
class BSTNode {//Classe genérica que define o nó-dado para a árvore
public:
    //Construtor: caso sem passagem de parâmetros
    BSTNode() {
        left = right = 0;
    }
    //Construtor: caso com passagem de parâmetros
    BSTNode(const T& e, BSTNode<T> *l = 0, BSTNode<T> *r = 0) {
        el = e; //dado genérico a ser guardado no nó
        left = l; //ponteiro que encadeia filho à esquerda, podendo ser NULL caso não seja passado
        right = r;//ponteiro que encadeia filho à direita, podendo ser NULL caso não seja passado
    }
    //Atributos públicos do nó-dado
    T el;
    BSTNode<T> *left, *right;
};

#endif //DISPLAY_TREE_BSTNODE_H
