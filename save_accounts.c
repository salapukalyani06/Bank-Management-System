#include "bank.h"
extern Account* head;

void save_accounts() {
    FILE* fp = fopen("data.txt", "w");
    if (!fp) {
        printf("Error saving data.\n");
        return;
    }
    Account* temp = head;
    while (temp) {
        fprintf(fp, "%lld %s %f %s %d\n", temp->account_number, temp->name,
                temp->balance, temp->contact, temp->transaction_count);
        for (int i = 0; i < temp->transaction_count; i++) {
            fprintf(fp, "%u %d %f\n", temp->transactions[i].id,
                    temp->transactions[i].type, temp->transactions[i].amount);
        }
        temp = temp->next;
    }
    fclose(fp);
    printf("Data saved successfully.\n");
}
