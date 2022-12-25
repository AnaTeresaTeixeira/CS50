#We can add items to a list

from cs50 import get_int

scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)

average = sum(scores) / len(scores)
print(f"Average: {average}")

#With the append method, a function built into list objects, we can add new values to scores.