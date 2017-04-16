#ifndef _FIFOQUEUECLASS_H_
#define _FIFOQUEUECLASS_H_
#include "LinkedNodeClass.h"

//Programmer: Yingjie Cai
//Date: April 2017
//Purpose: Provide a class for FIFO queue.

template < class T > 
class FIFOQueueClass 
{
private:     
    LinkedNodeClass< T > *head; //Points to the first node in a queue, or NULL
                                //if queue is empty.
    LinkedNodeClass< T > *tail; //Points to the last node in a queue, or NULL
                                //if queue is empty. 

public:     
    //Default Constructor.  Will properly initialize a queue to
    //be an empty queue, to which values can be added.
    FIFOQueueClass(
    ) :head(NULL), tail(NULL)
    { }

    //Inserts the value provided (newItem) into the queue.
    void enqueue(
        const T &newItem
    );  

    //Attempts to take the next item out of the queue.  If the
    //queue is empty, the function returns false and the state
    //of the reference parameter (outItem) is undefined.  If the
    //queue is not empty, the function returns true and outItem 
    //becomes a copy of the next item in the queue, which is 
    //removed from the data structure.
    bool dequeue(
        T &outItem
    ); 

    //Prints out the contents of the queue.  All printing is done
    //on one line, using a single space to separate values, and a
    //single newline character is printed at the end.
    void print(
    ) const; 

    //Returns the number of elements in the queue
    int getNumElems() const;

};

#include "FIFOQueueClass.inl"
#endif //_FIFOQUEUECLASS_H_