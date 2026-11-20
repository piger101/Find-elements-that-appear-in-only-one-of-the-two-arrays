#include <stdio.h>

int main(){
    int lst[40];
    for(int i = 0;i < 40;i++){
        lst[i] = -1;
    }
    int t = 0;
    int n1;
    scanf("%d",&n1);
    int lst1[n1];
    for(int i = 0;i < n1;i++){
        scanf("%d",&lst1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int lst2[n2];
    for(int i = 0;i < n2;i++){
        scanf("%d",&lst2[i]);
    }

    for(int i = 0;i < n1;i++){
        int flag = 0;
        for(int j = 0;j < n2;j++){
            if(lst1[i] == lst2[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            lst[t] = lst1[i];
            t++;
        }
    }
    for(int i = 0;i < n2;i++){
        int flag = 0;
        for(int j = 0;j < n1;j++){
            if(lst2[i] == lst1[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            lst[t] = lst2[i];
            t++;
        }
    }
    for(int i = 0;i < t;i++){
        for(int j = 0;j < i;j++){
            if(lst[i] == lst[j]){
                lst[i] = -1;
                break;
            }
        }
    }
    int first = 1;
    for(int i = 0;i < t;i++){
        if(lst[i] == -1){
            continue;
        }
        if(first == 0){
            printf(" ");
        }
        printf("%d", lst[i]);
        first = 0;
    }
    return 0;
}
