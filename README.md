# output-checker  
#### Instructions:  
* All the .c files outputs shall only print an integer variable and a linebreak (\n) (source easily changeable tho)  
* The desirable outputs shall be written in the expected_outputs vector; the number of desired outputs should also be placed in its constant  

This project also includes an example "inputs" file and a suited source file. Here's a sample command to test it:  
````bash
gcc foo.c -o bar.out && gcc checker.c -o checker.out
./bar.out < input > output
./checker.out
rm *.out output # optional: just to clean the "garbage"
````
