import matplotlib.pyplot as plt

threads = [1, 2, 4, 6, 8]
times = [0.247699, 0.129330, 0.075766, 0.059240, 0.059487]

speedup = [times[0] / t for t in times]

plt.plot(threads, speedup, marker='o')
plt.xlabel("Number of Threads")
plt.ylabel("Speedup")
plt.title("Parallel Matrix Multiplication Speedup (OpenMP)")
plt.grid(True)
plt.show()

