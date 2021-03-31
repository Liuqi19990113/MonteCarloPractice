#  This program is used to sample exp distribution with MC method
import random
import math
import matplotlib.pyplot as plt
lamda = 3   # The pdf is lamba*exp(lamda*x)
random_number = 1000000
binbin = 500
X_list = []
for i in range(0, random_number):
    X = -math.log(1-random.random())/lamda  #F^(-1)(Y)
    X_list.append(X)
plt.hist(X_list, binbin, color='g',density=True)
plt.xlabel('X')
plt.ylabel('p')
plt.show()
