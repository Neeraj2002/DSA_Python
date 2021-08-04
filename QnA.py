def q1():
    x = 9
    lst = [0] * x
    # Will print 0, x number of time
    print(lst)
    # Will print 0, till the last term in the list(i.e. 8 times)


def q2():
    def help(x):
        # Will return true if all number are divisible by 0
        return x % 2 == 0

    lst = [i ** 2 for i in range(10)]
    # Above will print [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
    lst = filter(help, lst)
    # So as fxn help it will remove all terms which are not divisible by 2
    # [0, 4, 16, 36, 64]
    print(list(lst)[::2])
    # Will print the list by skipping every next term [0, 16, 64]


def q3():
    z = 0
    for i in range(1, 10):
        # 1 // 2 will run first according to the maths rule ( 1 // 2  = 0) therefore ( i + 0 ) and % 7
        # which is true when i is 7
        if (i + 1 // 2) % 7 == 0:
            break
        else:
            z += int(i % 2 == 0)
            print(z)
    else:
        print('end')


def q4():
    import math

    for i in range(1, 100):
        # the below expression is not possible so loop will not break and o/p will be no
        if math.sqrt(i) == (i - 5) ** 2:
            print(i)
            break
    else:
        print('no')


def q5():
    class A:
        def __init__(self, x):
            self.x = x

        def __eq__(self, o):
            return self.x == o.x

    a = A(2)
    b = A(2)
    print(a == b)  # True
    print(a is b)  # False since both have different memory and (a is b) is called
    print(b is a)  # False since both have different memory and (a is b) is called
    print(a is a)  # True
    print(a == a)  # True


def q6():
    # Question on Class Inheritance
    class A:
        def __init__(self, x, y):
            self.x = x
            self.y = y

        def print(self):
            print(self.x, self.y)

    class B(A):
        def print(self):
            print(self.y, self.x)

    class C(B):
        def __init__(self, x, y, z):
            super().__init__(x, y)
            self.z = z

    d = A(2, 4)
    e = B(4, 5)
    g = C(3, 4, 7)
    g.x = g.z
    d.print()  # (2, 4)
    e.print()  # (5, 4)
    g.print()  # (4, 7)


def q7():
    def x(z):
        def q(x, y):
            x = y + z + x
            print(x)

        return q

    for i in range(10):
        func = x(i)
        func(i, i - 1)


def q8():
    def d(f):
        def w(*args, **kwargs):
            r = f(*args, **kwargs)
            r += 1
            return r

        return w

    @d
    def a(x):
        return x + 1

    print(a(5))


def q9():
    print(*list(map(lambda x: chr(ord(x) + 1), ["a", "b", "c"])))  # ASCHII of x will be taken when we call chr(ord(x))
    # and 1 is added to the aschii so when one is added to aschii of any letter it changes to the next letter so
    # a if passes will change to be and similarly with other characters


def q10():
    x = 0.1
    y = 0.10000000000000001
    print(x == y)  # Answer will be True


def q11():
    x = [True, 1, "a", "b", "2"]
    print(any(x))  # any function returns true is there is anything true in the above list


def q12():
    x = ["a", 1, 2, 3, 4]
    y = z = x
    z[1] = 7
    y[3] = 2
    x[2] = 9
    print(x)
    print(y)
    print(z)


def q13():
    print(1 == True)  # For a computer 1 is always True so o/p will be True
    print("1" == 1)   # Str 1 is not equal to int 1 so o/p is False


def q14():
    x = b'1001'  # b stands for byte
    y = b'1010'  # b stands for byte
    z = x + y
    print(z)


def q15():
    x = 0b1001
    y = 0b1010
    z = x + y
    print(z)
