def fun_par(l):
    par = []
    for n in l:
        if n % 2 == 0:
            par.append(n)
    return par
print(fun_par([2, 4, 6, 8, 10, 12, 14, 16, 17]))