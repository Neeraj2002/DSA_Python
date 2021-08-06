from abc import ABC, abstractmethod


class Graphic_Shape(ABC):
    def __init__(self):
        super().__init__()

    @abstractmethod
    def calcArea(self):
        pass


class Circle(Graphic_Shape):
    def __init__(self, radius):
        self.radius = radius

    def calcArea(self):
        return 3.14 * self.radius ** 2


class Square(Graphic_Shape):
    def __init__(self, side):
        self.side = side

    def calcArea(self):
        return self.side * self.side


c = Circle(10)
print(c.calcArea())

s = Square(8)
print(s.calcArea())