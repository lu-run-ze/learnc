
#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef char InfoType;

typedef struct
{
    KeyType key;
    InfoType info;
}Key;

//无检查哨
void Search_Seq01(Key *K,KeyType key, int len)
{
    int i;
    for(i = 1; i < len; i++)
    if(K[i].key == key)
    {
        printf("关键字信息为:%c\n",K[i].info);
        break;
    }
}

//有监察哨
void Search_Seq02(Key *K, KeyType key, int len)
{
    int i;
    K[0].key = key;
    for(i = len; K[i].key != key; i--);
    printf("关键字信息为：%c\n",K[i].info);
}

int main()
{
    Key *K;
    int i, M;
    printf("请输入关键字数");
    scanf("%d",&M);
    K = (Key *)malloc((M + 1) * sizeof(Key));

    printf("请输入关键字及关键字信息");
    for(i = 1; i <= M; i++){
        scanf("%d %c",&K[i].key,&K[i].info);
    }
    printf("按顺序查找\nkey = 4\n");
    Search_Seq01(K, 4, M);
    printf("\n");

    printf("监察哨顺序查找\nkey = 5\n");
    Search_Seq02(K, 5, M);
    printf("\n");

    return 0;       
}

