typedef int Item;
const int max_itens = 100;

class Queue{
    private:
    int first, last;
    Item* structure;

    public:
    Queue();
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(Item item);
    Item dequeue();
    void print();
};