import numpy as np
import os
import matplotlib.pyplot as plt

data = np.loadtxt("gauss.dat")

plt.figure()
plt.hist(data, bins=30, density=True, label='Metropolis-Hastings')
plt.savefig("gauss.png")