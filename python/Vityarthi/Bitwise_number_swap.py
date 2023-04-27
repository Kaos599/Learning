"""
Q4.Write a program to do exchange of two numbers using bitwise operators.
Sample Input:
a=150
b=270
"""
Answer4:
a = int(input("Enter the first number: ")) 
b = int(input("Enter the second number: "))
print("Before swapping: ") 
print("a = ", a) 
print("b = ", b)
a = a ^ b 
b = a ^ b 
a = a ^ b 
print("After swapping: ") 
print("a = ", a) 
print("b = ", b)
