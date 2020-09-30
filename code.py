print("Enter the initial value: ")
n = int(input())

sum = n

while sum > 9: #bcoz 1 and 7 are the only single digit happy numbers
    tmp = sum
    sum = 0
    while(tmp > 0 ):
        sum = sum + (tmp%10)**2
        tmp = tmp//10
    if sum == 1:
        print("True\nNumber satisfies the given condition.")
        break
else:
    if n == 1 or n == 7:
        print("True\nNumber satisfies the given condition.")
    else:
        print("False\nNumber does not satisfy the given condition.")
        