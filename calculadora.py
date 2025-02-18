a = float(input ("Ingrese el primer digito:"))
b = float(input ("Ingrese el segundo digito:"))
if a == 0 or b == 0:
    print("Error, los digitos no pueden ser cero.")
    exit()
print("suma: ", a+b, ", resta: ", a-b, ", multiplicación: ", a*b, ", división: ", a/b, ", residuo: ", a%b)
