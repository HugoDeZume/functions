def first_max( x, y ):
    if x > y:
        return x
    return y
def max_of_three( x, y, z ):
    return first_max( x, first_max( y, z ) )
print(max_of_three(20, 40, -5))