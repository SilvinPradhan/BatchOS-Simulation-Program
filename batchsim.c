//
// Created by Silvin Pradhan on 2/5/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

void displayJobs(char *path) {
    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    if (d == NULL) {
        printf("Could not open current directory.");
    }
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            char *file = dir->d_name;
            if (strstr(file, ".c") != NULL) {
                printf("%s\n", file);
            }
        }
        closedir(d);
    }
}

int main() {
    int option;
    char path[30] = "jobs/";
    char program[30];
    do {
        printf("---------- Welcome to BATCH SIMULATOR ----------\n");
        printf("Select between these options:\n");
        printf("1) List Jobs\n2) Set Jobs Directory\n3) Compile and run specific program\n4) Shutdown\n5) List program options\n6) help\n7) Perform all jobs!\n");
        scanf("%d", &option);

        if (option == 1) {
            printf("Path of the Current Jobs are: %s\n", path);
            displayJobs(path);
        } else if (option == 2) {
            printf("Please enter a job path:\n");
            scanf("%s", path);
            printf("New job has been created: %s\n", path);
        } else if (option == 3) {
            printf("------ Compile and Run a specific program ------\n");
            printf("Please enter a program to run: ");
            scanf("%s", program);
            char run[50];
            char out[50];
            strcpy(run, "gcc -o");
            strcat(run, path);
            strcat(run, program);
            strcat(run, ".out ");
            strcat(run, path);
            strcat(run, program);
            system(run);

            strcpy(out, path);
            strcat(out, program);
            strcat(out, ".out");

            system(run);
            printf("Job output: \n");
            system(out);
            printf("Job done!!\n\n");
        } else if (option == 5) {
            printf("It's hard to say goodbye. Thank you for using this OS.\n");
            option = 0;
        } else if (option == 7) {
            printf("\t\t\t------- Help -------\n");
            printf("Welcome to the console program that can compile and execute programs either by: \n "
                   "the user entering the name of the program,\n or automatically executing all of the programs in a directory.\n "
                   "The program will essentially simulate the system monitor of a Batch system.\n");
        } else {
            printf("Please select from option 1 - 7.\n");
        }
    } while (option != 0);
    return 0;
}
