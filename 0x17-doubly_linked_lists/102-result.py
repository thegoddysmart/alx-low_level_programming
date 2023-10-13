#!/usr/bin/python3

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if (str(product) == str(product)[::-1] and product > largest_palindrome):
            largest_palindrome = product

# Write the result to a file
with open("102-result", "w") as result_file:
    result_file.write(str(largest_palindrome))
