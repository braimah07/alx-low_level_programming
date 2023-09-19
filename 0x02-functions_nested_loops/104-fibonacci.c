# Initialize the first two Fibonacci numbers
a, b = 1, 2

# Print the first two numbers
print(a, end=", ")
print(b, end=", ")

# Initialize a counter
count = 2

# Loop to calculate and print the next 96 Fibonacci numbers
while count < 98:
    # Calculate the next Fibonacci number
    a, b = b, a + b

    # Print the number followed by a comma and space
    print(b, end=", ")

    # Increment the counter
    count += 1

# Print a new line to separate the numbers
print()
