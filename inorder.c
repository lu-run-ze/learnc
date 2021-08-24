
#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef char InfoType;

typedef struct
{
    KeyType key;
    InfoType info;
}Key;

//�޼����
void Search_Seq01(Key *K,KeyType key, int len)
{
    int i;
    for(i = 1; i < len; i++)
    if(K[i].key == key)
    {
        printf("�ؼ�����ϢΪ:%c\n",K[i].info);
        break;
    }
}

//�м����
void Search_Seq02(Key *K, KeyType key, int len)
{
    int i;
    K[0].key = key;
    for(i = len; K[i].key != key; i--);
    printf("�ؼ�����ϢΪ��%c\n",K[i].info);
}

int main()
{
    Key *K;
    int i, M;
    printf("������ؼ�����");
    scanf("%d",&M);
    K = (Key *)malloc((M + 1) * sizeof(Key));

    printf("������ؼ��ּ��ؼ�����Ϣ");
    for(i = 1; i <= M; i++){
        scanf("%d %c",&K[i].key,&K[i].info);
    }
    printf("��˳�����\nkey = 4\n");
    Search_Seq01(K, 4, M);
    printf("\n");

    printf("�����˳�����\nkey = 5\n");
    Search_Seq02(K, 5, M);
    printf("\n");

    return 0;       
}

