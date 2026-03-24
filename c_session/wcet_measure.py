import os
import time

max_time = 0.0
runs = 100

for i in range(runs):
    start = time.time()
    os.system("./wcet_test > /dev/null")
    end = time.time()

    duration = end - start

    if duration > max_time:
        max_time = duration

print(f"Maximum execution time over {runs} runs: {max_time:.6f} seconds")

safety_factor = 1.2
wcet = max_time * safety_factor

print(f"WCET with safety factor 1.2: {wcet:.6f} seconds")
