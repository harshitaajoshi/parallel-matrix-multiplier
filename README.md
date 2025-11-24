Parallel Matrix Multiplier (OpenMP)

High-Performance Computing Project • Parallel Programming • Benchmarking • Speedup Analysis

This project implements a parallelized matrix multiplication kernel in C using OpenMP, accompanied by a complete benchmarking workflow for analyzing multi-threaded performance. The goal is to measure how matrix multiplication scales across CPU cores and visualize the resulting speedup curve.

🚀 Features

Multi-threaded matrix multiplication using loop-level parallelism

Achieved 4× speedup compared to baseline serial execution

Benchmarked performance across 1–8 threads

Generated a research-grade speedup plot using Python & Matplotlib

Evaluated:

Thread scheduling

Workload balancing

Cache locality

Compute–memory bottlenecks

📁 Repository Structure
│── matrix.c        # Parallel matrix multiplication using OpenMP
│── plot.py         # Generates speedup visualization
│── speedup.png     # (Add this after exporting your graph)
│── .gitignore

⚙️ Compile & Run
1. Compile with OpenMP
/opt/homebrew/opt/llvm/bin/clang -Xclang -fopenmp matrix.c -o matrix -L/opt/homebrew/opt/llvm/lib -lomp

2. Run with different thread counts
export OMP_NUM_THREADS=1
./matrix

export OMP_NUM_THREADS=4
./matrix

📊 Benchmarking & Speedup Plot

Run the plotting script:

python3 plot.py


This produces a speedup graph:

Speedup = T(1 thread) / T(n threads)


Example result (yours):

1 thread → 0.247s

2 threads → 0.129s

4 threads → 0.075s

6 threads → 0.059s

8 threads → 0.059s

🔬 Parallel Performance Insights

This project demonstrates core HPC concepts:

Shared-memory parallelism

Diminishing returns beyond memory bandwidth limits

Strong vs. weak scaling

Cache locality and access patterns

Load balancing across threads

📌 Future Improvements

Add blocked (tiled) matrix multiplication for better cache efficiency

Investigate SIMD vectorization using Clang or ARM NEON

Add dynamic scheduling and analyze performance differences

Benchmark on larger matrix sizes (N > 1000)
