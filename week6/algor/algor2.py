#If we have a dictionary, a set of key-value pairs, we can also check for
# a particular key, and look at the value stored for it:

from cs50 import get_string

people = {
    "Carter": "+1-617-495-1000",
    "David": "+1-949-468-2750"
}

name = get_string("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number}")

