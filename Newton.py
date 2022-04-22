import numpy
import math

def funcao(x: int):
    return math.sin(x)-(numpy.e ** (-x))


def derivada(x: int):
    return math.cos(x)+(numpy.e ** (-x))


funcaoVar = 1
derivadaVar = 0
Xn = 0
print(f"Valor de x inicial: {Xn}")
while abs(funcaoVar) > 0.0001:
    funcaoVar = funcao(Xn)
    derivadaVar = derivada(Xn)
    print(f"Xn = {Xn},  f(x) = {funcaoVar}, f\'(x) = {derivadaVar}")
    Xn = Xn - funcaoVar/derivadaVar
print("Condição de parada satisfeita")
