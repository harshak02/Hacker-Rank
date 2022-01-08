class A :

    val = None

    def __init__(self,val) :
        self.val = val

class B(A) :
    val1 = None
    def __init__(self,val1) :
        self.val1 = val1

    def printData(self) :
        print(self.val1)

b = B(5)

b.printData()
#no need to use any blank constructor if we onlydo the work 
#derived class in pYthon
