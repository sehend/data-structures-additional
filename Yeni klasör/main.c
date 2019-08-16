#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    int data;
    struct linked_list *next;
} NODE;



void insert(int value){

    if(head==NULL){ /// ilk d�g�m olusturulmadiysa �nce onu olusturuyoruz.
        head = (NODE *)malloc(sizeof(NODE));
        head->data = value;
        head->next = NULL;
        tail = head; /// Sadece ilk d�g�m i�in, head = tail
    } else {
        NODE *temp = (NODE *)malloc(sizeof(NODE)); /// Eklenecek d�g�mler i�in memory allocation
        temp->data = value;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
    }
    printf("Eklenen data %d\n", value);
}
void head_insert(int value){

    if(head==NULL){ /// Ilk d�g�m olusturulmadiysa..
        head = (LL *)malloc(sizeof(NODE));
        head->data = value;
        head->next = NULL;
        tail = head; /// Sadece ilk d�g�m i�in, head = tail
    } else {
        NODE *temp = (NODE *)malloc(sizeof(NODE)); /// Eklenecek d�g�mler i�in memory allocation
        temp->data = value;
        temp->next = head;
        head = temp; /// Listenin basina yeni d�g�m ekledik.
    }
    printf("Listenin basina eklendi --> %d\n", value);
}
