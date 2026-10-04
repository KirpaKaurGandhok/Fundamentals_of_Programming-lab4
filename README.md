# Fundamentals_of_Programming - Lab 4: C++ Averages and Ocean-Level Projections — Build, Test, and Explain with AI

## Plans for Averages and Ocean-Level Programs
### average.cpp
My plan is to create five separate double variables to store the values 28, 32, 37, 24, and 33. I will then add the five variables together and then store the result in a double variable called sum. Then, I will divide sum by 5 and store the result in a double variable called average. Finally, I will display the sum and average.

### ocean_levels.cpp
My plan is to create a constant double variable called ANNUAL_RATE for the annual ocean-level increase of 1.5 millimeters. I will then use three separate constant int variables to store year values for 5, 7, and 10 years. I will calculate the ocean-level increase for each number of years and store each calculation in separate double variables called increase5years, increase7years, and increase10years. Finally, I will display all three results.

## Testing my Programs
| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Average — assigned values | 28, 32, 37, 24, 33 | Sum = 154; Average = 30.8 | Sum = 154; Average = 30.8 | Match |
| Average — changed values | 4, 27, 26, 14, 5 | Sum = 76; Average = 15.2 | Sum = 76; Average = 15.2 | Match |
| Ocean — assigned rate | 1.5 | 7.5, 10.5, 15 mm | 7.5, 10.5, 15 mm | Match |
| Ocean — changed rate | 2.7 | 13.5, 18.9, 27 mm | 13.5, 18.9, 27 mm | Match |

## Explaining my code
### Why should the five values and the average use the double data type?
The five variables and average should be stored using the double data type so that the averages don't lose the decimal portion. The double data type stores numbers with decimal values and the average may not always be a whole number, so using a variable of double data type allows for the program to store averages with decimal values.

### Trace the assigned values through sum and average.
The five assigned values are 28, 32, 37, 24, and 33. The program adds these values together and stores the result in the double variable "sum". Then, the program computes the average by dividing "sum" by 5 and storing it in the double variable "average". The average is 30.8. 

### Why should the average calculation divide the completed sum rather than only the final value?
The average calculation should divide the completed sum and not the final value because the average is calculated by adding up all of the values together and dividing that total by the number of values. That's why in our program we divided "sum" by 5. 

### Explain how the ocean-level calculations use the annual rate and number of years.
The program multiplies the annual ocean-level increase of 1.5 mm by the number of years. For example, after 7 years, the calculation is 1.5x7, which results in 10.5 mm. This same process is used for the other two values (5 years & 10 years).

### Why is the annual ocean-level rate a good candidate for a named constant?
The annual ocean-level rate should be a named constant because the assigned rate of 1.5 mm per year never changes during the program. Doing this also makes the program easier to understand. 

### Why does the assignment require calculations to be stored before using cout?
I think that this assignment require calculations to be stored in a variable before using cout because doing this makes the code both easier to read and understand. It also makes the calcualtions easier to debug/correct if there's any errors.

## Compiling & Running Both Programs
### average.cpp

#### to compile
g++ -std=c++17 -Wall -Wextra average.cpp -o average

#### to run
./average

### ocean_levels.cpp
#### to compile
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels

#### to run
./ocean_levels
