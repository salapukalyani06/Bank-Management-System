#include "bank.h"
extern Account* head;

void display_accounts()
{
    Account* temp = head;
    while (temp) {
        printf("Acc No: %lld | Name: %s | Balance: %.2f | Contact: %s\n",
               temp->account_number, temp->name, temp->balance, temp->contact);
        temp = temp->next;
    }
}

