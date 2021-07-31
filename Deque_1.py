"""
    1. DEQUE: Double Ended QUEue
    2. It is an ADT that hold both a Stack and a Queue
    3. Items in a deque can be added and removed from both the front and the back.
    4. List can be used as a data type to implement Deque
        Front               Rear
             __________________
             | 1 | 2 | 3 | 4 |
        Queue: add   | Stack: add/Remove
        remove front | Queue: Remove
    5. Deque can use both LIFO AND FIFO both at the same time
    6. Any data type that can be stored in a list can be stored in a deque.
    7. Also a limited access dat structure as it can only br accessed from either ends
"""


class Deque:
    def __init__(self):
        self.items = []

    def add_front(self, item):
        """
            Takes an item as a parameter and inserts it into the 0th index of the list
            that is representing the Deque

            The run time is linear, or 0(n), because every time you insert into the
            front of a list, all the other items in the list need to shift one
            position to the right.

        """

        self.items.insert(0, item)

    def add_rear(self, item):
        """
            Takes an item as a parameter and appends it to the end of the list
            that is representing the Deque

            The run time is constant because appending to the end of a list happens
            at constant time
        """
        self.items.append(item)

    def remove_front(self):
        """
            Removes and returns all the item in the 0th index of the list, which represents the
            front of the Deque.

            The run time is linear 0(n), because as we remove the item from the 0th index, all
            other item has to shift one index to the left.
        """
        if self.items:
            return self.items.pop(0)
        return None

    def remove_rear(self):
        """
            Removes and returns the last item of the list, which represents the
            front of the Deque.

            the run time is constant because all we are doing is indexing to the
            end of the list.
        """
        if self.items:
            return self.items.pop()
        return None

    def peek_front(self):
        """
             Returns the value found at the 0th index of a list, which represents the
             front of the Deque.

             The run time is constant because all we are doing is indexing into a list
        """
        if self.items:
            return self.items[0]
        return None

    def peek_rear(self):
        """
            Returns the value found at the -1st  or the last index.

            The run time is constant because all we are doing is indexing into a list
        """
        if self.items:
            return self.items[-1]
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

            The run time is 0(1) ar the constant time
        """
        return self.items == []
