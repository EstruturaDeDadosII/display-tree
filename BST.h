//
// Created by thiago on 5/28/2018.
//

#ifndef DISPLAY_TREE_BST_H
#define DISPLAY_TREE_BST_H

#include "BSTNode.h"


template<class T> class BST;//Declara uma classe de manipulação de árvore binária
// para tipo genérico. Observe que ainda não possui atributos ou métodos - a ser feito mais abaixo...

template<class T>
class BST { //Aqui temos a implementação de métodos e atributos da classe que definirá a árvore binária
public:
    BST() { //construtor
        root = 0; //root é o atributo de controle da ED, ponteiro de início, inicia em NULL
    }
    ~BST() { //destrutor
        clear();
    }
    void clear() {//chamada para desalocar tudo que tiver sendo apontado pelo root...
        clear(root);//sobrecarga de método mais abaixo, que aceitará parâmetro (ponteiro) para ir desalocando todos os nós...
        root = 0; //após anterior, atribui NULL ao controle root
    }
    bool isEmpty() const { //teste se árvore é vazia?
        return root == 0;
    }
    void preorder() { //varre árvore em pré-ordem
        preorder(root); //sobrecarga de método mais abaixo
    }
    void inorder() { //varre árvore em in-ordem ("em ordem")
        inorder(root); //sobrecarga de método mais abaixo
    }
    void postorder() { //varre árvore em pós-ordem
        postorder(root); //sobrecarga de método mais abaixo
    }
    void insert(const T&);
    void recursiveInsert(const T& el) {
        recursiveInsert(root,el);
    }
    T* search(const T& el) const {
        return search(root,el);
    }
    T* recursiveSearch(const T& el) const {
        return recursiveSearch(root,el);
    }
    void deleteByCopying(BSTNode<T>*&);
    void findAndDeleteByCopying(const T&);
    void deleteByMerging(BSTNode<T>*&);
    void findAndDeleteByMerging(const T&);
    void iterativePreorder();
    void iterativeInorder();
    void iterativePostorder();
    void breadthFirst();
    void MorrisPreorder();
    void MorrisInorder();
    void displayTree();
    void MorrisPostorder();
    void balance(T*,int,int);
protected:
    BSTNode<T>* root;
    void clear(BSTNode<T>*);
    void recursiveInsert(BSTNode<T>*&, const T&);
    T* search(BSTNode<T>*, const T&) const;
    T* recursiveSearch(BSTNode<T>*, const T&) const;
    void preorder(BSTNode<T>*);
    void inorder(BSTNode<T>*);
    void postorder(BSTNode<T>*);
    virtual void visit(BSTNode<T>* p) {
        cout << p->el << ' ';
    }
};

#endif //DISPLAY_TREE_BST_H
