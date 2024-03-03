contestants_number, kth_place = input().split()
contestants_number = int(contestants_number)
kth_place = int(kth_place)
contestants_score = input().split()
total = 0
 
for i in range(contestants_number):
    if int(contestants_score[i]) >= int(contestants_score[kth_place-1]) and int(contestants_score[i]) > 0:
        total += 1
 
print(total)