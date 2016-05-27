#Teste Z Simples desenvolvido por Emanuel Lima (IF USP).
from math import *
print("Bem vindo ao Teste Z Simples por Emanuel Lima. \n")

#Seleciona o tipo: referencia ou experimental, calcula e mostra o valor.
print("Selecione o tipo de Teste Z a ser calculado:")
print("Digite 1 para comparar um resultado a uma expectativa.")
print("Ou digite 2 para comparar dois resultados experimentais.")
resposta = float(input("Digite apenas numeros aqui: "))
print(" ")

if resposta == 1:
    print("Qual e o valor medio? Qual e o valor de referencia? Qual e o desvio padrao da media? \n")
    vmedio = float(input("Valor medio: "))
    referencia = float(input("Valor de referencia: "))
    desvpadm = float(input("Desvio padrao: "))
    testez1 = (vmedio - referencia)/desvpadm
    print ("Resultado: ")
    print(testez1)
    input("Aperte enter para encerrar")
elif resposta == 2:
    print ("Qual e o primeiro valor? Qual e a incerteza do primeiro valor? Qual e o segundo valor?  Qual e a incerteza do segundo valor?")
    valor1 = float(input("Primeiro valor: "))
    incerteza1 = float(input("Incerteza: "))
    valor2 = float(input("Segundo valor: "))
    incerteza2 = float(input("Incerteza: "))
    incerteza1power = pow(incerteza1, 2)
    incerteza2power = pow(incerteza2, 2)
    testez2 = (valor1 - valor2)/(sqrt(incerteza1power + incerteza2power))
    print("Resultado: ")
    print (testez2)
    input("Aperte enter para encerrar")
else:
    print("Comando desconhecido.")
    input("Aperte enter para encerrar")
