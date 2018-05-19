#include <iostream>
#include <fstream>

struct Queue
{
    int x;
    Queue *Next, *Head, *Tail;
};

void CreateQueue(Queue *MyQueue);
void Push(int x,Queue *&MyQueue, std::ofstream &f);
int  Pop(Queue *MyQueue, std::ofstream &f);
void ClearQueue(Queue *MyQueue);
void Print(Queue *MyQueue, std::ofstream &f);
void Action(int Pop);
bool EmptyQueue(Queue *MyQueue);
