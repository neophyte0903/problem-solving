# Enter your code here. Read input from STDIN. Print output to STDOUT
import cmath
p=complex(input())
x=p.real
y=p.imag
print(abs(complex(x,y)))
print(cmath.phase(complex(x,y)))
