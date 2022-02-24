#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template<class T>

class LinkedList{
private:
    void new_node(string, string);
    void destroy_node(T *);

public:
    T *HEAD;
    LinkedList();
    LinkedList(T *);
    LinkedList(string, string);
    // this program only programmed to insert at tail
    void set_head(T *);
    void set_head(string, string);
    void insert(T *);
    void insert(string, string);
    void search(T *);
    bool find_id(string);
    void search(string);
    void remove(T *);
    void remove(string);
    void printList();   
    void destroy_list();
    int length();
};

typedef LinkedList LL;
#endif
