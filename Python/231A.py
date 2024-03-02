problems_number = int(input())
sum = 0
for i in range(problems_number):
    p, v, t = input().split()
    p = int(p)
    v = int(v)
    t = int(t)
    if (p+v+t) > 1:
        sum += 1
        
print(sum)