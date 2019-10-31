import numpy as np
import os
import matplotlib.pyplot as plt

data = np.loadtxt("gauss.dat")

plt.figure()
plt.hist(data, bins=20, density=True, label='Metropolis-Hastings')
plt.savefig("gauss.png")