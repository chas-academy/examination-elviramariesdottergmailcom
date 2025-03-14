#include <stdio.h>
#include <ctype.h>

void scoring_storer(int score[]) {

    for (int i = 0; i < 13; i++) {
        scanf("%d", &score[i]);
    }
}


// function that lets user input name and automatically makes first letter uppercase.
void name_uppercase (char name[]) {
    scanf("%s", name);
    name[0] = toupper(name[0]);
}

// function to calculate individual mean scores for students.
float mean_calculator(int score[], float mean) {

    for (int i = 0; i < 13; i++) {
        mean += score[i];
    }

    return mean / 13;
}

// function to print the names of the students below the total mean
void below_mean(char name[], float mean, float total_mean) {

    if (mean < total_mean) {
        printf("%s\n", name);
    }
}

int main() {

    // step 1: accept input for 5 students, and 13 results for each student


    // strings to store the names of all 5 students
    char student1[10];
    char student2[10];
    char student3[10];
    char student4[10];
    char student5[10];

    // int arrays to store all scores for each student
    int scores1[13];
    int scores2[13];
    int scores3[13];
    int scores4[13];
    int scores5[13];

    // integers to store the means of each individual students test scores.
    float mean1;
    float mean2;
    float mean3;
    float mean4;
    float mean5;
    float total_mean;


    // lets user enter name followed by 13 test results for each of the five students. Also transforms first letter of names to uppercase if not already
    name_uppercase(student1);
    scoring_storer(scores1);
    name_uppercase(student2);
    scoring_storer(scores2);
    name_uppercase(student3);
    scoring_storer(scores3);
    name_uppercase(student4);
    scoring_storer(scores4);
    name_uppercase(student5);
    scoring_storer(scores5);

    // calculates the mean score for each student and stores it in the respective mean variable
    mean1 = mean_calculator(scores1, mean1);
    mean2 = mean_calculator(scores2, mean2);
    mean3 = mean_calculator(scores3, mean3);
    mean4 = mean_calculator(scores4, mean4);
    mean5 = mean_calculator(scores5, mean5);

    // prints out the name of the one student with the highest mean
    if (mean1 > mean2 && mean1 > mean3 && mean1 > mean4 && mean1 > mean5) {
        printf("%s\n", student1);
    } else if (mean2 > mean1 && mean2 > mean3 && mean2 > mean4 && mean2 > mean5) {
        printf("%s\n", student2);
    } else if (mean3 > mean1 && mean3 > mean2 && mean3 > mean4 && mean3 > mean5) {
        printf("%s\n", student3);
    } else if (mean4 > mean1 && mean4 > mean2 && mean4 > mean3 && mean4 > mean5) {
        printf("%s\n", student4);
    } else if (mean5 > mean1 && mean5 > mean2 && mean5 > mean3 && mean5 > mean4) {
        printf("%s\n", student5);
    }

    // calculates total mean, and then prints the names of the students with a mean score below it
    total_mean = (mean1 + mean2 + mean3 + mean4 + mean5) / 5;
    below_mean(student1, mean1, total_mean);
    below_mean(student2, mean2, total_mean);
    below_mean(student3, mean3, total_mean);
    below_mean(student4, mean4, total_mean);
    below_mean(student5, mean5, total_mean);


    return 0;
}