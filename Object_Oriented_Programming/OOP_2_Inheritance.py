class Publication:
    def __init__(self, title, price):
        self.title = title
        self.price = price


class Periodical(Publication):
    def __init__(self, title, price, period, publisher):
        super().__init__(title, price)
        self.period = period
        self.publisher = publisher


class Book(Publication):
    def __init__(self, title, author, pages, price):
        super().__init__(title, price)
        self.author = author
        self.pages = pages


class Magazine(Periodical):
    def __init__(self, title, publisher, price, period):
        super().__init__(title, price, period, publisher)


class Newspaper:
    def __init__(self, title, publisher, price, period):
        super().__init__(title,price, period, publisher)


b1 = Book("ABC", "XYZ", 999, 99.9)
n1 = Newspaper("BCD", "WXY", 99, "Daily")
m1 = Magazine("ABCD", "WXYZ", 9, "Weekly")





