# include <stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

void release_list(struct Node *node);

void release_list(struct Node *node)
{
    struct Node *temp;
    while(node != NULL)
    {
        temp = node;
        node = node->next;
        free(temp);
    }
}

int main(void)
{
    //尾插法
    int a,count;
    struct Node *temp;
    struct Node *head = NULL;
    while(count < 5){
        printf("输入要插入的结点的值：");
        scanf("%d",&a);
        struct Node *node;
        node = (struct Node *)malloc(sizeof(struct Node));
        node->value = a;
        count ++;
        if(head == NULL){
            node->next = NULL;
            head = node;
        }
        else{
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
            node->next = NULL;
        }
    }

    temp = head;
    while(head != NULL){
        printf("输入要链表插入结点的值:%d\n",head->value);
        head = head->next;
    }

    release_list(temp);

    return 0;
}

