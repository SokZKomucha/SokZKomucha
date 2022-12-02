import time

file = open('output.txt', 'w')      # Opens output file

i = 0                               # Used for loop
amount = int(input('Amount -\t'))   # Asks for the amount of lines

# Actual generation

file.write('if (number == 0):\n')
file.write('\tprint ("This number is even")\n')

while (i < amount):
    file.write(f'elif (number == {i + 1}):\n')
    file.write('\tprint ("This number is not even")\n')

    file.write(f'elif (number == {i + 2}):\n')
    file.write('\tprint ("This number is even")\n')

    i += 2

print (f'Succesfully printed about {amount} lines of code')     # Prints out this when the loop finishes  
file.close()    # Closes the file                                            
time.sleep(5)   # Sleep for 5 seconds