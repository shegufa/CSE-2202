#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[50000];
int main()
{
    FILE *fw,*fr;
    char filename[] = "input1.txt";
    fw = fopen(filename,"w");
    int N= 50000,i,j,k;
    time_t t;
    srand((unsigned)time(&t));
    for(i=0;i<N/2;i++)
    {
        //fprintf(fw,"%d",rand()%(50000+1+50000)-50000);
        fprintf(fw,"%d ",rand());
        fprintf(fw,"%d ",rand()/-1);

    }
    fclose(fw);


    fr = fopen(filename,"r");
    for(i=0;i<N;i++)
        fscanf(fr,"%d",&a[i]);
    for(i=0;i<N-2;i++)
        for(j=i+1;j<N-1;j++)
            for(k=j+1;k<N;k++)
    {
        if(a[i]+a[j]+a[k]==0)
            printf("%d %d %d\n",a[i],a[j],a[k]);
    }

    return 0;
}
