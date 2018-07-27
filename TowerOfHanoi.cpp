#include<Stdio.h>
int main()
{
    void tower(char,char,char,int);
    int n;
    char from,to,use;
    printf("Enter Number of Disk : ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("Can't be possible\n");
        int exit(1);
    }
    else
    {
        tower('A','c','B',n);
    }
}
void tower(char from,char to,char use,int n)
{
if(n == 1){
    printf("\nMove disk from %c to %c",from,to);
}
else
{
    tower(from,use,to,n-1);
    tower(from,to,use,1);
    tower(use,to,from,n-1);
}


}
