#Derrick Demers
#6/17/19
#This is a small practice program that is a merely a simple quiz program

print("Gaming Quiz") #prints to user what this is

class question: #this is where all the questions and answers are identified
    def __init__(self, prompt, answer):
        self.prompt = prompt
        self.answer = answer

question_prompts = [ #an array filled with the questions in string form
    "What color is Spyro the Dragon?\n(a) Purple\n(b) Orange\n",
    "The Land of Azeroth is found in what game?\n(a) Dark Souls\n(b) World of Warcraft\n",
    "What color is Mario's hat?\n(a) Red\n(b) Blue\n",
    "What game is the Aperture Science Company from?\n(a) Dead Space\n(b) Portal\n",
    "What game can you find Hyperius the Invincible?\n(a) Borderlands 2\n(b) Red Dead Revolver\n"
]

questions = [ #an array that assigns each question a number and answer
    question(question_prompts[0], "a"),
    question(question_prompts[1], "b"),
    question(question_prompts[2], "a"),
    question(question_prompts[3], "b"),
    question(question_prompts[4], "a"),
]

def run_quiz(questions): #defines how the quiz runs
    score = 0
    for question in questions: #takes the questions from the arrays
        answer = input(question.prompt)     #checks to see if the answer from the user is correct
        if answer == question.answer:       #if the answer is correct, the score goes up
            score += 1
        print("you got ", score, "out of ", len(questions))

run_quiz(questions)
