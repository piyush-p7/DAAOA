def gcd(a, b):

    if (a == 0): return b
    return gcd(b % a, a)

a = int(input("Enter first number : "))
b = int(input("Enter second number : "))

print("GCD of " + str(a) + " and " + str(b) + " is = " + str(gcd(a, b)))