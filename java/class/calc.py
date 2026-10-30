class Calculator():
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def add(self):
        return self.a+self.b
    def sub(self):
        return self.a-self.b
    class Logic(Calculator):
        def __init__(self,a,b):
            super().__init__(a,b)
        def mul(self):
            return self.a*self.b
        def div(self):
            return self.a/self.b
calculator1 = Calculator(10,20)
print(calculator1.add())