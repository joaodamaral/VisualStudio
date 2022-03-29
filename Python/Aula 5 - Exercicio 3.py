"""
Professor, não consegui rodar o programa em C++. Por algum motivo dava erro. Escrevi esse em python para ver se a logica estava certa
e usei a mesma estrutura, com exceção da classificação da lista, que influencia no resultado final.
De qualquer forma, vou mandar os dois codigos
"""
from operator import index
import numpy

a1, b1, c1 = input('Quais os lados do triangulo?').split()
#print('lado a', a1)
#print('lado b', b1)
#print('lado c', c1)

lista1 = [a1, b1, c1]

lista1.sort()

c = float(lista1[0])
b = float(lista1[1])
a = float(lista1[2])

if c > a:
    c = float(lista1[2])
    a = float(lista1[0])

print(a, b, c)
print("\n")


if a >= b + c:
    print('Não forma triangulo')
elif a == b and b ==c and c == a:
    print('Triangulo Equilátero')
elif a**2 == (b**2 + c**2):
    print('Triangulo retângulo')
elif a**2 > (b**2 + c**2):
    print('Triangulo Obtusangulo')
    if a == b or b ==c or a == c:
        print('Triangulo Isoceles\n')
elif a**2 < (b**2 + c**2):
    print('Trinangulo Acutangulo')
    if a == b or b ==c or a == c:
        print('Triangulo Isoceles\n')

