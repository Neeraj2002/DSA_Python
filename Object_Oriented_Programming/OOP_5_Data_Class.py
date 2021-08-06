from dataclasses import dataclass, field
import random


def price_func():
    return float(random.randrange(20, 40))


@dataclass()
class Book:
    # You can define a default value when attributes are declared
    # All the attributes should have a default value for the function to work
    title: str = "No Title"
    author: str = "No Author"
    pages: int = 0
    price: float = field(default_factory=price_func)

    # __post_init__ function lets us customize additional property
    # after the object has been initialized via built-in __init__
    def __post_init__(self):
        self.description = f"{self.title} by {self.author}, with {self.pages} pages."

    def book_info(self):
        return f"{self.title}, by {self.author}"


# b1 = Book("A B C", "X Y Z", 1200, 20.4)
# b2 = Book("X Y Z", "A B C", 930, 10.4)
# b3 = Book("X Y Z", "A B C", 930, 10.4)

# # # Basics on Data Classes
# print(b1.pages)
# print(b2.title)

# # Printing the book using __repr__
# print(b1)
#
# # Comparing 2 data classes - they implement - __eq__
# print(b2 == b3)
# print(b1 == b3)
#
# # Changing some of the fields
# b1.title = "Fuck off"
# b1.pages = 300
# print(b1.book_info())

# # Post init Method implementation
# print(b1.description)

# # Default Function of data classes
# b1 = Book("A B C", "X Y Z", 1200)
# b2 = Book("X Y Z", "A B C", 930)
#
# print(b1)
# print(b2)
