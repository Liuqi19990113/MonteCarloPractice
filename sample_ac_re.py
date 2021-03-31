import random
import matplotlib.pyplot as plt

rand_number = 10000000

def uniform_return_funtion():              #reference function is uniform distribution's pdf in [0,2]
    y = random.random()
    x = 2*y
    return x

def accept_reject_criterion(accept_reject_number,x):    
    if accept_reject_number <= (1-0.5*x)/(2*0.5):            #the function needed sample is 1-0.5*x
        return True
    else:
        return False

x_sample_list = []

for i in range(0,rand_number):
    accept_reject_number = random.random()
    x = uniform_return_funtion()
    if(accept_reject_criterion(accept_reject_number,x)):
        x_sample_list.append(x)


plt.hist(x_sample_list,bins=500,color='g',density=True)
plt.xlabel('x')
plt.ylabel('pdf result')
plt.show()
