def printName(n):
    if n==0:
        print("ZERO")
    elif n==1:
        print("ONE")
    elif n==2:
        print("TWO")
    elif n==3:
        print("THREE")
    elif n==4:
        print("FOUR")
    elif n==5:
        print("FIVE")
    elif n==6:
        print("SIX")
    elif n==7:
        print("SEVEN")
    elif n==8:
        print("EIGHT")
    elif n==9:
        print("NINE")
    else:
        print("Invalid Number")
def main(): 
    n=eval(input("Enter a number:"))
    printName(n)
main()
