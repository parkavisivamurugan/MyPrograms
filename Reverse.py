def main():
    print("Enter a string : ")
    a=input()
    print("Reversed string : ",a[::-1])
    print("Enter a number : ")
    b=int(input())
    r=0
    while b>0:
        q=b%10
        r=r*10+q
        b=b//10
    print("Reversed number : ",r) 
main()
