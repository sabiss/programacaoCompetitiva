# A estudante Ana está se preparando para uma maratona de programação e resolveu controlar melhor os seus gastos semanais. Ela anotou os valores gastos em cada um dos próximos N dias.

# Você deve ajudá-la a responder a Q perguntas. Cada pergunta consiste em dois inteiros L e R (0 ≤ L ≤ R < N), e sua tarefa é informar qual foi o total gasto entre os dias L e R, inclusive.
import sys
input = sys.stdin.readline


entradas = input()
n, q= map(int, entradas.split())

g = input()

gastos = list(map(int, g.split()))
somagastos = []

for i in range(len(gastos)):
    if(i==0):
        somagastos.append(gastos[0])
    else:
        somagastos.append(somagastos[i-1] + gastos[i])

for _ in range(q):
    entradas = input()
    l, r = map(int,entradas.split())

    if(l == 0):
        print(somagastos[r])
    else:
        print(somagastos[r]- somagastos[l-1])

