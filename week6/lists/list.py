#We can use sum, a function built into Python, to add up the values in our list,
#and divide it by the number of scores, using the len function to get the length of the list.

scores = [72, 73, 33]

average = sum(scores) / len(scores)
print(f"Average: {average}")
print(f"Average: {average:.2f}")