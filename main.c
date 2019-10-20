#include <stdio.h>
struct data{
    char num[5];
    //struct *front;
    //struct *back;
};
int main(int argc, char *argv[]) 
{
    struct data list[100];
    char str[5];
    int cnt=0;
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
        if(str=='0'){
            for(int i=0;i<=cnt;i++)
                printf("%s,",list[i].num);
        }
        if(str=="-1"){
            printf("%s",list[cnt].num);
            sprintf(list[cnt].num,NULL);
            cnt--;
        }
        else{
            sprintf(list[cnt+1].num, "%s", str);
            cnt++;
        }
    }
    return 0;
}
