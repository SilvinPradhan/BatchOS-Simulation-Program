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
    char path[20] = "jobs/";
    do {
        printf("---------- Welcome to BATCH SIMULATOR ----------\n");
        printf("Select between these options:\n");
        printf("1) List Jobs\n2) Set Jobs Directory\n3) Compile and run specific program\n4) Shutdown\n5) List program options\n6) help\n7) Perform all jobs!\n");
        scanf("Option (and Press Enter):  %d", &option);

        if (option == 1) {
            printf("Path of the Current Jobs are: %s\n", path);
            displayJobs(path);
        } else {
            printf("Please select from option 1 - 7.");
        }
    } while (option != 0);
    return 0;
}
