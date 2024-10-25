#include <iostream>
#include "vec.h"

/**
 * @brief Main function that demonstrates vector operations.
 * 
 * This function creates two 3D vectors, performs 
 * subtraction and dot product operations, and outputs
 * the results to the console.
 * 
 * @param num_args The number of command-line arguments.
 * @param args The command-line arguments.
 * @return 0 on successful execution.
 */
int main(int num_args, char** args) {
    double3 a{0, 1, 2}; //!< First vector.
    double3 b{0, 0, 1}; //!< Second vector.
    
    std::cout << a - b << std::endl; //!< Output the result of vector subtraction.
    std::cout << dot(a, b) << std::endl; //!< Output the result of dot product.

    return 0; //!< Successful execution.
}
