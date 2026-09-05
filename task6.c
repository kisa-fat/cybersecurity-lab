int main()
{
    char incid[25] ,an[25];
    int as, erc, trc;
    float dt;
    printf("==================================\n");
    printf("SECURITY INCIDENT REPORT\n");
    printf("==================================\n");
    printf("Incident ID    :");
    scanf("%24s", incid);
    printf("Analyst    :");
    scanf("%24s", an);
    printf("Affected Systems    :");
    scanf("%d", &as);
    printf("Recovery Cost    :");
    scanf("%d", &erc);
    trc= as*erc;
    printf("Total Cost    :%d\n", trc);
    printf("Downtime     :");
    scanf("%.2f", &dt);
    printf("\n");
    printf("==================================");
    return 0;
}