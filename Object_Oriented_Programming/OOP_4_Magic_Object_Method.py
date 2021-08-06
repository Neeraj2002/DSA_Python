class Book:
    def __init__(self, title, author, price):
        super(Book, self).__init__()
        self.title = title
        self.author = author
        self.price = price
        self._discount = 0.1

    def __str__(self):
        return f"{self.title}, by {self.author} which costs: {self.price}"

    def __repr__(self):
        return f"Title: {self.title}, Author: {self.author}, Costs: {self.price}"

    # It checks for the equality between 2 objects
    def __eq__(self, value):
        if not isinstance(value, Book):
            raise ValueError("Can't compare to a non-book")
        return (self.title == value.title and
                self.author == value.author and
                self.price == value.price)

    # Greater than equal to check
    def __ge__(self, value):
        if not isinstance(value, Book):
            raise ValueError("Can't compare  to a non-book")
        return self.price >= value.price

    # Less than equal to check
    def __le__(self, value):
        if not isinstance(value, Book):
            raise ValueError("Can't compare  to a non-book")
        return self.price <= value.price

    # __getattribute__ is called when an attr is retrieved.
    # Don't directly access the attribute name or else a recursive loop will be created
    def __getattribute__(self, name):
        if name == "price":
            p = super().__getattribute__("price")
            d = super(Book, self).__getattribute__("_discount")
            return p - (p * d)
        return super().__getattribute__(name)

    # __setattr__ is called when an attribute value is set
    # Don't set the attribute value directly or else a recursive loop will be created
    def __setattr__(self, name, value):
        if name == "price":
            if type(value) is not float:
                raise ValueError("Thr price attr must be  a float")
        return super(Book, self).__setattr__(name, value)

    # __getattr__ is called when __getattribute__ lookup fails(Does not exist), one
    # can generate attribute on the fly with this method
    def __getattr__(self, name):
        return name + " is not here!"

    # __call_ can be used to call objects like a function
    def __call__(self, title, author, price):
        self.title = title
        self.author = author
        self.price = price


# # __str__ __repr__ __gt__ __lt__
# b1 = Book("ABC", "XYZ", 10)
# b2 = Book("ABC", "XYZ", 10)
# b3 = Book("ABC", "WXYZ", 21)
# b4 = Book("ABCD", "WXYZ", 5)
#
#
# print(str(b1))
# print(repr(b1))
#
# # Equality check
# print(b1 == b2)
# print(b1 == b3)
#
# # Greater and less than check
# print(b2 >= b1)
# print(b1 <= b3)
# print(b4 >= b1)
#
# books = [b1, b2, b3, b4]
# books.sort()
# print([book.title for book in books])

# # __getattribute__ __setattr__ __getattr__
# b1 = Book("X Y Z", "A B C", 28.80)
# b2 = Book("Xfes Yeff Zef", "Aas fsvd", float(30))
#
# print(b1)
# print(b2)
#
# print(b1.randomprop)

# # __call__
# b1 = Book("X Y Z", "A B C", 28.80)
# b2 = Book("Xfes Yeff Zef", "Aas fsvd", 19.9)
#
# print(b1)
# b1("A B C", "X Y Z", 45.86)
# print(b1)
