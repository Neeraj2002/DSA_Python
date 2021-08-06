def fib(n):
    while n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)


def Count_ways(s):
    return fib(s + 1)


s = int(input("Enter number of ways:"))
print(f"No. of ways: {Count_ways(s)}")
