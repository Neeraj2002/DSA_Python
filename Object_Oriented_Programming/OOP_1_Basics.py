class Book:
    def __init__(self, title, author, pages, price):
        self._Book__secret = None
        self.title = title
        self.author = author
        self.pages = pages
        self.price = price
        # To attribute has a specific way to call
        self.__secret = "This is a secret attribute"

    def get_price(self):
        if hasattr(self, "_discount"):
            return self.price - (self.price * self._discount)
        else:
            return self.price

    def set_discount(self, amount):
         self._discount = amount


class Paper:
    pass


b1 = Book("Atomic Habit", "XYZ", 123, 39.9)
print(b1.price)
b1.set_discount(0.5)
print(b1.get_price())

""" isinstance(): Return True if the object argument is an instance of the classinfo argument,
 or of a (direct, indirect or virtual) subclass thereof. If object is not an object of the 
 given type, the function always returns False. If classinfo is a tuple of type objects 
 or recursively, other such tuples), return True if object is an instance of any of the types.
 If classinfo is not a type or tuple of types and such tuples, a TypeError exception is raised."""
print(isinstance(b1, Book))

# This is how to call the __xyz attribute in a class
print(b1._Book__secret)
