def numero(n):
    suma = 0
    for x in range(1, n):
        if n % x == 0:
            suma += x
    return suma == n
print(numero(18))
 