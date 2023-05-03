#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee {
    char name[50];
    int age;
    char position[50];
    char doj[11];
};

int compareByName(const void *a, const void *b) {
    struct employee *emp1 = (struct employee *)a;
    struct employee *emp2 = (struct employee *)b;
    return strcmp(emp1->name, emp2->name);
}

int compareByDOJ(const void *a, const void *b) {
    struct employee *emp1 = (struct employee *)a;
    struct employee *emp2 = (struct employee *)b;
    char s1[11], s2[11];
    strcpy(s1, emp1->doj);
    strcpy(s2, emp2->doj);
    char *token1 = strtok(s1, "/");
    char *token2 = strtok(s2, "/");
    while(token1!=NULL && token2!=NULL) {
        int n1 = atoi(token1);
        int n2 = atoi(token2);
        if(n1!=n2) return n1-n2;
        token1 = strtok(NULL, "/");
        token2 = strtok(NULL, "/");
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee emp[n];
    for(int i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Position: ");
        scanf("%s", emp[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", emp[i].doj);
    }

    //sort by name
    qsort(emp, n, sizeof(struct employee), compareByName);

    printf("\nEmployee List sorted by name:\n\n");
    for(int i=0; i<n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n", emp[i].doj);
        printf("\n");
    }

    //sort by date of joining
    qsort(emp, n, sizeof(struct employee), compareByDOJ);

    printf("\nEmployee List sorted by date of joining:\n\n");
    for(int i=0; i<n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n", emp[i].doj);
        printf("\n");
    }

    return 0;
}
