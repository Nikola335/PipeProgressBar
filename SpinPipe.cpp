#include <iostream>
#include <string>
#include <thread>


// Function prototypes
void spinningPipeProgressBar(int progress);


int main() {

    // Print the progress bar with a progress of 30%
    spinningPipeProgressBar(100);

    return 0;
}


// Function to print a spinning pipe progress bar 
// with the given percentage of completion 
void spinningPipeProgressBar(int progress)
{

    // Create a string containing the pipe character (|) repeated 
    // as many times as the percentage of completion  
    std::string pipes = std::string(progress, '|');

    // Print the pipes string, followed by the percentage of completion  
    std::cout << pipes << " " << progress << "%\r";

    // Flush the output stream to ensure that it is printed immediately  
    std::cout.flush();
}