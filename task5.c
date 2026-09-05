#include<stdio.h>
int main()
{
    int sid, tl, qm, am, pm, tas;
    float lcp, cl;
    char sn[25];
    printf("Enter the student's name: \n");
    scanf("%s", &sn);
    printf("Enter student id: \n");
    scanf("%d", &sid);
    printf("Enter the number of completed labs: \n");
    scanf("%f", &cl);
    printf("Enter the total number of labs: \n");
    scanf("%d", &tl);
    printf("Enter your quiz marks: \n");
    scanf("%d", &qm);
    printf("Enter your assignment marks: \n");
    scanf("%d", &am);
    printf("Enter your project marks: \n");
    scanf("%d", &pm);
    lcp= ((float)cl/tl)*100;
    printf("Lab Completion Percentage is: %.2f", lcp);
    tas= qm+am+pm;
    printf("Total Academic Score is: %d", tas);
    return 0;
}