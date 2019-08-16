#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    int data;
    struct linked_list *next;
} NODE;



void insert(int value){

    if(head==NULL){ /// ilk dügüm olusturulmadiysa önce onu olusturuyoruz.
        head = (NODE *)malloc(sizeof(NODE));
        head->data = value;
        head->next = NULL;
        tail = head; /// Sadece ilk dügüm için, head = tail
    } else {
        NODE *temp = (NODE *)malloc(sizeof(NODE)); /// Eklenecek dügümler için memory allocation
        temp->data = value;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
    }
    printf("Eklenen data %d\n", value);
}
void head_insert(int value){

    if(head==NULL){ /// Ilk dügüm olusturulmadiysa..
        head = (LL *)malloc(sizeof(NODE));
        head->data = value;
        head->next = NULL;
        tail = head; /// Sadece ilk dügüm için, head = tail
    } else {
        NODE *temp = (NODE *)malloc(sizeof(NODE)); /// Eklenecek dügümler için memory allocation
        temp->data = value;
        temp->next = head;
        head = temp; /// Listenin basina yeni dügüm ekledik.
    }
    printf("Listenin basina eklendi --> %d\n", value);
}
