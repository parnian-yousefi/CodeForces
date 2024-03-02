round_number = int(input())
final_player_score = {}
level_player_score = {}
input_string = ["" for i in range(round_number)]
max_score = -10001

for i in range(round_number):
    input_string[i] = input()
    name, score = input_string[i].split()
    score = int(score)
    if name in final_player_score:
        final_player_score[name] += score
    else:
        final_player_score[name] = score

max_score = max(final_player_score.values())
    
for i in range(round_number):
    name, score = input_string[i].split()
    score = int(score)
    if name in level_player_score:
        level_player_score[name] += score
    else:
        level_player_score[name] = score
            
    if final_player_score[name] == max_score and level_player_score[name] >= max_score:
        winner = name
        break
        
print(winner)
