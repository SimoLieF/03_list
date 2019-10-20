#include <stdio.h>
#include<string.h>
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
        printf("%s",str);
        if(str=="0"){
            for(int i=cnt;i>=0;i--){
                printf("%s",list[i].num);
                if(i<cnt)
                    printf(",");
            }
            printf("\n");
        }
        if(str=="-1"){
            printf("%s\n",list[cnt].num);
            memset(list[cnt].num,'\0',sizeof(list[cnt].num));
            cnt--;
        }
        else{
            sprintf(list[cnt+1].num, "%s", str);
            cnt++;
        }
    }
    return 0;
}
