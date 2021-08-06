"""
    1. It is an ADT that stored items in the order in which they were added.
    2. Items in the queue are added to the back and removed from the front.
    3. For eg. I a queue of people, people join the line at the back and leave
    the line from the front. (first-in, first-out, FIFO)
    4. The order in which people join the line is preserved.
    5. List can be used as a data type for queue
    6. Back                 Front
          ____________________
          | 0 | 1 | 2 | 3 | 4 |
        Left               Right
    7. To add items : Enqueue   To remove items : Dequeue
    8. Queue is limited access because we can only access data from one place i.e. from the front
    9. Queue are recursive data structures
"""


class Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        """
            Takes in an item and inserts that item in the 0th index of the list that is
            representing the Queue.

            The run time is 0(n), or the linear time, because inverting into the 0th
            index of a list forces all the other items in the list to move one index
            to the right.
        """
        self.items.insert(0, item)

    def dequeue(self):
        """
            Returns and removes the front most item in the queue, which is represented by
            the last item in the list

            The run-time is 0(1), or constant time because indexing to the end of a list
            happens in constant time
        """
        if self.items:
            return self.items.pop()
        else:
            return None

    def peek(self):
        """
            Returns the last item in the list, which is the front most item
            in the queue.

            The run time is constant  because we're just indexing to the last item of
            th list and returning the value found there.
        """
        if self.items:
            return self.items[-1]
        else:
            return None

    def size(self):
        """
            Returns the size of the list, which is represented by the length of the list

            The run time is 0(1) or the constant time
        """
        return len(self.items)

    def is_empty(self):
        """
            Returns a boolean value expressing whether or not the list is representing
            the length of the list

            Thr run time is 0(1) ar the constant time

        """
        return self.items == []
