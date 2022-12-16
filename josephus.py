def Josh(person, k, index):

    if len(person) == 1:
        print("The person who survives the game is = " + str(person[0]))
        return

    index = ((index + k) % len(person))

    person.pop(index)

    Josh(person, k, index)

n = int(input("Enter number of players : "))
k = int(input("Enter number of skips : "))
k -= 1

index = 0

person = []
for i in range(1,n+1):
    person.append(i)

Josh(person, k, index)