""" Q3. Write a program to do exchange of two numbers using addition and subtraction without
using temporary variables.
Sample Input:
a=150
b=270
Sample Output:
a=270
b=150
"""




a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
print("Before swapping: ") 
print("a = ", a) 
print("b = ", b)
a= a+b
b = a-b
a = a-b
print(a)
print(b)
