"""Q1. Find the average of five different subject marks.
Sample Input:
Subject 1: 66
Subject 2: 77
Subject 3: 88
Subject 4: 99
Subject 5: 55
Sample Output: 77 """

# Answer1: Two methods -
Subject = [0] * 5 # create a list of zeros 
Total_Marks = 0 
for i in range(5): 
    i += 1 
    Subject[i-1] = int(input("Please enter subject " + str(i) + ": ")) (b)
    Total_Marks += Subject[i-1] # update Total_Marks 
    Average = int((Total_Marks/5)) 
print(Average) # print average outside the loop

"""(b) Total_Marks = sum(map(int, input("Please enter the marks of 5 subjects(separated by whitespace): ").split()))
Average = int((Total_Marks/5)) 
print(Average)"""
