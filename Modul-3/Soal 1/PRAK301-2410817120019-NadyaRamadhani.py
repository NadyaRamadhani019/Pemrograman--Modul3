a, b, c = map(int, input().split())
if a<b and b<c and a<c:
    print(a, b, c)
elif a<c and c<b and a<b:
    print(a, c, b)
elif b<a and b<c and c<a:
    print(b, c, a)
elif b<a and a<c and b<c:
    print(b, a, c)
elif c<a and c<b and a<b:
    print(c, a, b)
elif c<a and b<a and c<b:
    print(c, b, a)