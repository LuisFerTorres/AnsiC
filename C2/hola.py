def complemento_uno(num, bits = 32):
        c1 = ~num
        c1 &= (2 ** bits) - 1
        return c1 

def complemento_dos(num, bits=32):
        c1 = complemento_uno(num, bits)
        c2 = c1 + 1
        return c2

numero = 60
print(f"{numero:#034b}")
print(f"{complemento_uno(numero):#034b}")

# def complemento_uno(num, bits=32):
#     num = ~num
#     num &= (2 ** bits) - 1
#     return num

# def complemento_dos(num, bits=32):
#     complemento_uno_resultado = complemento_uno(num, bits)  # Corrección: almacenar el resultado del complemento a uno
#     complemento_dos_resultado = complemento_uno_resultado + 1
#     complemento_dos_resultado &= (2 ** bits) - 1  # Aplica la máscara para mantener solo los bits deseados
#     return complemento_dos_resultado

# numero = 60 

# print(f"{numero:#034b}")
# print(f"{complemento_uno(numero):#034b}")
