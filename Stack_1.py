""" 1. Stack is in ADT(Abstract Data Type) which holds a collection items in the order they were added
    2. One can only add items to and remove items from the TOP of the Stack
    3. We can also say Stack as last in first out
    4. It means the last item to enter the stack will leave first (LIFO: Last In First Out)
    5. Consider the stack as stack of pancakes, so the last pancake which is added to the top will come out
       first
    6. One cannot remove the pancake which is at the bottom without removing the pancakes above it
    7. So in python we can use list as the data type for stack
    8. LEFT                RIGHT
            __________________
           | 1 | 2 | 3 | 4 | 5|
       BOTTOM              TOP
    9. Any data that can be stored in the list, it can be stored in the stack
    10. Stack has a limited access because we can only access the data from one place(i.e. from the end)
    11. Stack is a recursive data Structure
"""


class Stack:
    def __init__(self):
        self.item = []

    def push(self, item):
        """
            It accepts the item as parameter and appends it to the end of the list
            It returns nothing

            The run time for this method is 0(1), or constant time because appending
            to the end of the list happens in constant time
        """
        self.item.append(item)

    def pop(self):
        """
            Removes and returns the last item from the list, which is also the top item of
            the stack.

            The run time here is constant time, because all it does is index to the last item
            of the list
        """
        if self.item:
            return self.item.pop()

        return None

    def peek(self):
        """
            This method returns the last item of the list, which is also the item
            at the top of the stack.

            This method is done in constant time because indexing into the list takes
            constant time


        """
        if self.item:
            return self.item[-1]

        return None

    def size(self):
        """
        This method returns the length of the list that is representing the stack.

        This method runs in constant time because finding the list also happens in
        constant time
        """
        return len(self.item)

    def is_empty(self):
        """
        This method returns a boolean value describing whether or not the stack is empty

        The run time is constant
        """
        return self.item == []


"""WAP to check if the opening bracket has a closing bracket or not(i.e. : {}, [], () )"""


def match_symbols(symbol_str):
    symbol_pairs = {
        '{': '}',
        '[': ']',
        '(': ')'
    }

    openers = symbol_pairs.keys()
    print(f"Openers: {openers}")
    my_stack = Stack()

    index = 0
    while index > len(symbol_str):
        symbol = symbol_str[index]

        if symbol == openers:
            my_stack.push(symbol)

        else:
            if my_stack.is_empty():
                return False

            else:
                top_item = my_stack.pop()
                print(top_item)
                if symbol != symbol_pairs[top_item]:
                    return False

        index += 1

    if my_stack.is_empty():
        return True

    return False


print(match_symbols('(([{}]])'))
