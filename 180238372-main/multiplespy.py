# Solicitamos los numeros al usuario
num1 = int(input("Ingresa el primer número hasta donde multiplique: "))
num2 = int(input("Ingresa el segundo número que hará las multiplicaciones: "))

# Iniciamos variables
contador = 1

# Ciclo while para generar las multiplicaciones para mostrar resultado
while contador <= num1:
    resultado = contador * num2
    print(f"{contador} x {num2} = {resultado}")
    contador += 1
