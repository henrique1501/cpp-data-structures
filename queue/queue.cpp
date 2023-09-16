#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue()
{
    first = 0;
    last = 0;
    structure = new Item[max_itens];
}

Queue::~Queue()
{
    delete [] structure;
}

bool Queue::isEmpty()
{
    return (last == first);
}

bool Queue::isFull()
{
    return (last - first == max_itens);
}

void Queue::enqueue(Item item)
{
    if (isFull()){
        cout << "A fila esta cheia\n";
        cout << "Esse elemento nao pode ser inserido\n";
    } else{
        structure[last % max_itens] = item;
        last++;
    }
}

Item Queue::dequeue()
{
    if (isEmpty()){
        cout << "A fila esta vazia!\n";
        cout << "Nenhum elemento foi removido!\n";
        return 0;
    } else{
        first++;            
        return estrutura[(first - 1) % max_itens];
    }
}

void Queue::print()
{
    cout << "Fila: [ ";
    for (int i = first; i < last; i++){
        cout << structure[i % max_itens] << " ";
    }
    cout << "]\n";
}