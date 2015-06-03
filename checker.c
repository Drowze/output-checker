// OUTPUT CHECKER
// made by Drowze aka Rafael G (https://github.com/Drowze)

// Instructions: All the .c files outputs shall only print an integer variable and a linebreak (\n)  
//               All the .c files should be in the same directory of this file compiled AND the "input" file (which should contain all the desirable tests);  
//               The desirable outputs shall be written in the expected_outputs vector; the number of desired outputs should also be placed in its variable

// This project also includes an example "inputs" file and suited file. Here's a sample command:
// gcc foo.c -o bar.out && ./bar.out < input > output && gcc checker.c -o checker.out && ./checker.out

#include <stdio.h>
#define NUMBER_OF_OUTPUTS 5 //number of desirable outputs

int main(void){
    int expected_outputs[] = {495000, //desired outputs
                              430100, 
                              7700, 
                              0, 
                              1225
                             };
    int readings[NUMBER_OF_OUTPUTS];
    int i;
    int alright = 1; //It's ok util it's proven wrong

    FILE *fp = fopen("output", "r");
    
    if (fp == NULL){
        printf("Error opening file");
        return 1;
    }

    for(i = 0; i < NUMBER_OF_OUTPUTS; i++)
        fscanf(fp, "%d\n", &readings[i]);

    for(i = 0; i < NUMBER_OF_OUTPUTS; i++)
        if(expected_outputs[i] != readings[i])
            alright = 0; //In fact, the output has proven to be wrong

    if(alright == 1)
        printf("Expected outputs!");
    else
        printf("ERROR! Unexpected outputs!");

    fclose(fp);

    return 0;
}