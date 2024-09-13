# C++ Statistics Analysis Project

## Overview
This project implements a set of C++ utilities for performing statistical analysis, specifically focusing on maximum value calculations and range analysis. The project is modular, allowing users to compute statistical values using different methods implemented in separate `.cpp` and `.h` files.

## Features
- **Max Value Calculation**: Calculates the maximum value in a dataset using the functions provided in `stats_max.cpp` and `stats_max.h`.
- **Range Analysis**: Calculates the range (difference between the highest and lowest values) in a dataset using the functions provided in `stats_range.cpp` and `stats_range.h`.
- **Modular Design**: Each statistical function is encapsulated in its own module, making it easier to maintain and extend the functionality.

## Project Structure
- **`stats_max.cpp`**: Contains the implementation of functions to compute the maximum value of a dataset.
- **`stats_max.h`**: Header file that declares the functions for maximum value computation.
- **`stats_range.cpp`**: Contains the implementation of functions to compute the range of a dataset.
- **`stats_range.h`**: Header file that declares the functions for range computation.
- **`stats_max.o`**: Object file generated from compiling `stats_max.cpp`.

## How to Build and Run

1. Clone the repository:
    ```bash
    git clone https://github.com/arnold-shakirov/Stats-Analysis.git
    ```

2. Navigate to the project directory:
    ```bash
    cd stats-analysis
    ```

3. Compile the C++ files:
    ```bash
    g++ -o stats_analysis stats_max.cpp stats_range.cpp
    ```

4. Run the program:
    ```bash
    ./stats_analysis
    ```

## Requirements
- **C++ Compiler**: Ensure you have a C++ compiler such as `g++` installed on your system.
- **C++17** or higher recommended.

## Installation
1. Clone or download the repository.
2. Compile the C++ files using `g++` or any other standard C++ compiler:
    ```bash
    g++ -o stats_analysis stats_max.cpp stats_range.cpp
    ```

3. Run the program by executing:
    ```bash
    ./stats_analysis
    ```

## Contact

For any questions or suggestions, feel free to reach out to me at [ashakirov@stetson.edu].
