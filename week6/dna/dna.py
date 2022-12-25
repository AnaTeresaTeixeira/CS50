import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        return

    # TODO: Read database file into a variable
    dna = []
    with open(sys.argv[1], "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            dna.append(row)

    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as f:
        text = f.read()

    # TODO: Find longest match of each STR in DNA sequence

    a = longest_match(text, "AGATC")
    b = longest_match(text, "AATG")
    c = longest_match(text, "TATC")
    d = longest_match(text, "TTTTTTCT")
    e = longest_match(text, "TCTAG")
    f = longest_match(text, "GATA")
    g = longest_match(text, "TATC")
    h = longest_match(text, "GAAA")
    w = longest_match(text, "TCTG")

    # TODO: Check database for matching profiles
    person = None

    # If the second command line match this string
    if sys.argv[1] == "databases/small.csv":
        # Loop thru the list of dict
        for i in range(len(dna)):
            # If the value match with the fucntion value
            if int(dna[i]["AGATC"]) == a and int(dna[i]["AATG"]) == b and int(dna[i]["TATC"]) == c:
                # Set the name == person
                person = dna[i]["name"]
        # If the there's a match
        if person != None:
            print(person)
        else:
            print("No match")

    # If the second command line match the string
    elif sys.argv[1] == "databases/large.csv":
        # Loop thru the list of dict
        for i in range(len(dna)):
            # Count to refresh each literation
            count = 0
            # If the key value in dic match
            if int(dna[i]["AGATC"]) == a and int(dna[i]["TTTTTTCT"]) == d and int(dna[i]["AATG"]) == b and int(dna[i]["GAAA"]) == h:
                count += 1

            if int(dna[i]["TCTAG"]) == e and int(dna[i]["GATA"]) == f and int(dna[i]["TATC"]) == g and int(dna[i]["TCTG"]) == w:
                count += 1
            # If all Dna matches
            if count == 2:
                # set the name == person
                person = dna[i]["name"]

        if person != None:
            print(person)
        else:
            print("No match")

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
