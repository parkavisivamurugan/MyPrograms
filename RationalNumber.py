class rationalNumber:
      def __init__(self,a,b):
          self.a=a
          self.b=b
      def __add__(self,o):
          o1=rationalNumber(0,0)
          if (self.b!=o.b):
             o1.a=(self.a*o.b)+(self.b*o.a)
             o1.b=self.b*o.b
             return o1
          else:
              o1.a=self.a+o.a
              o1.b=self.b
              return o1
      def __sub__(self,o3):
          o2=rationalNumber(0,0)
          if (self.b!=o3.b):
             o2.a=(self.a*o3.b)-(self.b*o3.a)
             o2.b=self.b*o3.b
             return o2
          else:
              o2.a=self.a-o3.a
              o2.b=self.b
              return o2
      def __mul__(self,o2):
          o3=rationalNumber(0,0)
          o3.a=self.a*o2.a
          o3.b=self.b*o2.b
          return o3
      def __floordiv__(self,o3):
          o4=rationalNumber(0,0)
          o4.a=self.a*o3.b
          o4.b=self.b*o3.a
          return o4
      def display(self):
          print(self.a,"/",self.b)
def main():
      num=1
      while num>0 and num<5:
        print("\nMENU")
        print("1.ADD")
        print("2.SUBTRACT")
        print("3.MULTIPLY")
        print("4.DIVIDE")
        num=int(input("Enter ur choice "))
        m1=int(input("Enter numerator of 1st number "))
        n1=int(input("Enter denominator of 1st number "))
        m2=int(input("Enter numerator of 2nd number "))
        n2=int(input("Enter denominator of 2nd number "))
        o1=rationalNumber(m1,n1)
        o2=rationalNumber(m2,n2)
        if num==1:
            a1=o1+o2
            a1.display()
        elif num==2:
            a2=o1-o2
            a2.display()
        elif num==3:
             a3=o1*o2
             a3.display()
        elif num==4:
             a4=o1//o2
             a4.display()
        else:
             break
main()
